#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    	vector<string> res;
        string top = "qwertyuiopQWERTYUIOP";
        string mid = "asdfghjklASDFGHJKL";
        string bottom = "zxcvbnmZXCVBNM";
        for (auto w : words) {
        	if ((w.find_first_of(top) != string::npos &&
        		w.find_first_of(mid) == string::npos &&
        		w.find_first_of(bottom) == string::npos) || 
        		(w.find_first_of(top) == string::npos &&
        		w.find_first_of(mid) != string::npos &&
        		w.find_first_of(bottom) == string::npos) ||
        		(w.find_first_of(top) == string::npos &&
        		w.find_first_of(mid) == string::npos &&
        		w.find_first_of(bottom) != string::npos)){
        		res.push_back(w);
        	}
        }
        return res;
    }
};

void print(const vector<string>& vec)
{
	for (auto str : vec) {
		cout << str << " ";
	}
	cout << endl;
}

int main()
{
	vector<string> vec = {"safaldf", "sdfei", "xcxcvn", "weirod", "wopri"};
	print(vec);
	Solution s;
	vector<string> res = s.findWords(vec);
	print(res);
}