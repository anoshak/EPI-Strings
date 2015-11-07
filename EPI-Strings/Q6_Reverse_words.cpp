/*
 * Q6_Reverse_words.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

void reverse_words(string& s, int start, int end)
{
	while(start <end)
	{
		char c = s[start];
		s[start] = s[end];
		s[end] = c;
		start++;
		end--;
	}
}
string reverse_words(string s)
{
	int n = s.size();
	reverse_words(s,0,n-1);

	for(int i=0;i<n;)
	{
		int start,end;
		while(i<n && s[i]==' ')
			i++;
		if(i>=n)
			return s;
		start = i;
		while(i<n && s[i]!=' ')
			i++;
		end = i-1;
		reverse_words(s,start,end);
	}
	return s;
}

/*
int main()
{
	cout<<reverse_words("Alice likes Bob");
	return 0;
}

*/


