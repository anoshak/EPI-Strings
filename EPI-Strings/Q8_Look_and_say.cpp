/*
 * Q8_Look_and_say.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"


string lookAndSay(int n)
{
	string last = "1";
	for(int i=1;i<n;i++)
	{
		string curr;
		for(int i=0;i<last.size();)
		{
			int count = 1;
			i++;
			while(i<last.size() && last[i] == last[i-1])
			{
				count++;
				i++;
			}
			curr += (count + '0');
			curr += last[i-1];
		}
		last = curr;
	}
	return last;
}
/*
int main()
{
	cout<<lookAndSay(5);
	return 0;
}*/
