#include <iostream>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int base = 1;
        int ret = 0;
        while (num) {
        	if (num % 2 == 0) {
        		ret += base;
        	}
        	base *= 2;
        	num = num >> 1;
        }
        return ret;
    }
};

int main()
{
	Solution s;
	cout << s.findComplement(1);
}