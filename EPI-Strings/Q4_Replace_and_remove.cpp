/*
 * Q4_Replace_and_remove.cpp
 *
 *  Created on: Nov 6, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

string replaceAndRemove(string s)
{
	//first remove b and count a.
	int copy =0, i=0,count=0, n=s.size();
	for(;i<n;i++)
	{
		if(s[i]!='b')
			s[copy++] = s[i];
		if(s[i]=='a')
			count++;
	}

	if(count ==0)
		return s;

	n = copy;
	s.resize(n + count);

	//start filling from behind
	for(int i=n+count-1,copy=n-1;copy>=0;)
	{
		if(s[copy]!='a')
			s[i--] = s[copy--];
		else
		{
			s[i--] = 'a';
			s[i--] = 'a';
			copy--;
		}
	}

	return s;
}

/*
int main()
{
	cout<<replaceAndRemove("bcaac");
	return 0;
}

*/
