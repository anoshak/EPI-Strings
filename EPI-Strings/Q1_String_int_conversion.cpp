/*
 * Q1_String_int_conversion.cpp
 *
 *  Created on: Nov 6, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

int string_to_int(string s)
{
	if(s.size()==0)
		return 0;
	int i=0,answer=0;
	bool neg = false;
	if(s[i] == '-')
	{
		neg = true;
		i++;
	}
	for(;i<s.size();i++)
	{
		answer = answer*10 + (s[i]-'0');
	}
	if(neg)
		return answer*-1;
	else return answer;
}

string int_to_string(int num)
{
	string result;
	if(num==0)
	{
		result += '0';
		return result;
	}
	bool neg = false;
	if(num<0)
	{
		neg = true;
		num *= -1;
	}
	while(num)
	{
		char c = num%10 + '0';
		result += c;
		num = num/10;
	}

	if(neg)
		result += '-';
	reverse(result.begin(),result.end());
	return result;
}

/*
int main()
{
	int a = -19424;
	string s = int_to_string(a);
	cout<<s<<endl;
	cout<<string_to_int(s)<<endl;
	return 0;
}
*/

