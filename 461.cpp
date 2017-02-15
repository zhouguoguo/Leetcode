#include <iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int t = 0;
        for (int i = 0; i < 32; ++i) {
        	if (x % 2 != y % 2) ++t;
        	x = x >> 1;
        	y = y >> 1;
        }
        return t;
    }
};

int main()
{
	Solution s;
	cout << s.hammingDistance(1, 4);
}