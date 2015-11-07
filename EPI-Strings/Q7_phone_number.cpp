/*
 * Q7_phone_number.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */


#include "common_utils.h"

class Solution {

private:
vector<vector<char> > generate_charmap()
{
    string arr;
    vector<vector<char> > charmap;
    arr = "abc";
    vector<char>* temp = new vector<char> (arr.begin(),arr.end());
    charmap.push_back(*temp);
    arr = "def";
    temp = new vector<char> (arr.begin(),arr.end());
    charmap.push_back(*temp);
    arr = "ghi";
    temp = new vector<char> (arr.begin(),arr.end());
    charmap.push_back(*temp);
    arr = "jkl";
    temp = new vector<char> (arr.begin(),arr.end());
    charmap.push_back(*temp);
    arr = "mno";
    temp = new vector<char> (arr.begin(),arr.end());
    charmap.push_back(*temp);
    arr = "pqrs";
    temp = new vector<char> (arr.begin(),arr.end());
    charmap.push_back(*temp);
    arr = "tuv";
    temp = new vector<char> (arr.begin(),arr.end());
    charmap.push_back(*temp);
    arr = "wxyz";
    temp = new vector<char> (arr.begin(),arr.end());
    charmap.push_back(*temp);
    return charmap;

}

vector<string> letterCombinations(string digits,vector<vector<char> >& charmap, int index)
{
    vector<string> result;
    if(index>=digits.size())
    {
        result.push_back("");
        return result;
    }
    vector<char> temp = charmap[digits[index]-'2'];
    vector<string> remaining = letterCombinations(digits,charmap,index+1);
    for(int i=0;i<temp.size();i++)
    {
        for(int j=0;j<remaining.size();j++)
        {
            string s = temp[i] + remaining[j];
            result.push_back(s);
        }
    }
    return result;

}

public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size()==0)
            return result;
        vector<vector<char> > charmap = generate_charmap();
        result = letterCombinations(digits,charmap,0);
        return result;
    }
};


