/*
 * Q14_Rabin_karp.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */


#include "common_utils.h"

int rabin_karp(const string& text, const string& pat)
{
	int n = text.size(), m = pat.size();
	if(n==0 || m>n)
		return -1;

	int d = 256, q = 101;
	//compute initial hashes
	int t=0, p =0, h=1;
	for(int i=0;i<m;i++)
	{
		p = (p*d + pat[i])%q;
		t = (t*d + text[i])%q;
	}

	//calculate h
	for(int i=0;i<m-1;i++)
		h = (h*d)%q; // This will give pow(d,m-1)

	for(int i=0;i<=n-m;i++)
	{
		if(p==t)
		{
			//hash matched. Check individual characters
			int j;
			for(j=0;j<m;j++)
			{
				if(pat[j] !=text[i+j])
					break;
			}
			if(j==m)
				return i+1;
		}
		//Else move ahead and compute new hash for text
		if (i < n - m) {
			t = (d * (t - text[i] * h) + text[i + m]) % q;
			if (t < 0)
				t = t + q;
		}
	}

	return -1;
}

int main()
{
	string pat = " geeks";
	string text = "geeks for geeks";
	int result = rabin_karp(text,pat);
	if(result == -1)
		cout<<"Pattern not found in text";
	else
		cout<<"Pattern found at position "<<result<<" in the text.";
	return 0;
}

