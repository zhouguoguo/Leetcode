#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        
        for (int i = 1; i <= n; ++i) {
        	if (i % 3 == 0 && i % 5 == 0)
        	{
        		res.push_back("FizzBuzz");
        	}
        	else if (i % 3 == 0) {
        		res.push_back("Fizz");
        	}
        	else if (i % 5 == 0) {
        		res.push_back("Buzz");
        	}
        	else {
        		ostringstream ostr;
        		ostr << i;
        		res.push_back(ostr.str());
        	}
        }
        return res;
    }
};

void print(const vector<string>& v)
{
	for (auto a : v)
	{
		cout << a << endl;
	}
	cout << endl;
}

int main()
{
	Solution s;
	vector<string> res;
	res = s.fizzBuzz(15);
	print(res);
}