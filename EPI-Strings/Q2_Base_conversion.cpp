/*
 * Q2_Base_conversion.cpp
 *
 *  Created on: Nov 6, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

string convert_base(string num, int b1, int b2)
{
	if(b1 < 2 || b2<2 || b1 > 16 || b2 > 16 || num.size()==0)
		return NULL;
	if(b1==b2)
		return num;
	bool neg = (num[0]=='-');


	//First convert to base 10;
	int result = 0;
	int i = 0;
	if (neg)
		i++;
	for (; i < num.size(); i++) {
		result *= b1;
		result += num[i] < '10' ? num[i] - '0' : num[i] - 'A' + 10;
	}

	//Convert from base 10 to b2

	string final;
	if(result == 0)
		return "0";
	while(result)
	{
		int no = result %b2;
		char c = no<10 ? no+'0' : no -10 + 'A';
		final += c;
		result /= b2;
	}

	if(neg)
		final += '-';
	reverse(final.begin(),final.end());
	return final;

}

/*
int main()
{
	cout<< convert_base("615",7,13);
}

*/

