#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        string res;
        copy(s.rbegin(), s.rend(), back_inserter(res));
        return res;
    }
};

int main()
{
	Solution s;
	cout << s.reverseString("hello!");
}