/*
 * Q3_Spreadsheet_column_to_int.cpp
 *
 *  Created on: Nov 6, 2015
 *      Author: Anoshak
 */


#include "common_utils.h"

int spreadsheet_col_to_int(string s)
{
	int result = 0;
	for (char c : s)
	{
		result = result * 26 + c-'A' + 1;
	}
	return result;
}

/*
int main()
{
	cout<< spreadsheet_col_to_int("ZZ");
	return 0;
}

*/


