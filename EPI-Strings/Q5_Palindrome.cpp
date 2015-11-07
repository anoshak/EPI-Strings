/*
 * Q5_Palindrome.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

bool isPalindrome(string s)
{
	int i=0,j=s.size()-1;
	while(i<=j)
	{
		while(i<=j && !isalnum(s[i]))
			i++;
		while(i<=j && !isalnum(s[j]))
			j--;
		if(i>j)
			break;
		else if(tolower(s[i])!=tolower(s[j]))
			return false;
		else
		{
			i++;
			j--;
		}
	}
	return true;
}

/*int main()
{
	cout<<isPalindrome("Able was I,ere I saw Elba!");
	cout<<endl<<isPalindrome("Ray a Ray");
	return 0;
}*/


