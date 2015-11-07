/*
 * Q7_phone_number.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */


#include "common_utils.h"

vector<string> letterCombinations(string digits, string charmap[8],int index)
{
	vector<string> result;
	if (index >= digits.size()) {
		result.push_back("");
		return result;
	}
	string temp = charmap[digits[index] - '2'];
	vector<string> remaining = letterCombinations(digits, charmap, index + 1);
	for (int i = 0; i < temp.size(); i++) {
		for (int j = 0; j < remaining.size(); j++) {
			string s = temp[i] + remaining[j];
			result.push_back(s);
		}
	}
	return result;
}

vector<string> letterCombinations(string digits) {
	vector<string> result;
	if (digits.size() == 0)
		return result;
	string charmap[8] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	result = letterCombinations(digits, charmap, 0);
	return result;
}

/*
int main()
{
	vector<string> result = letterCombinations("23");
	for(int i=0;i<result.size();i++)
		cout<<result[i]<<" ";
}
*/



