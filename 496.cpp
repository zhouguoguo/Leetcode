#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> res(findNums);
        vector<int> index(nums.size(), -1);

        if (findNums.empty()) return res;

        for (auto it = index.size() - 1; it != 0; --it)
        {
        	for (auto jt = 0; jt < it; ++jt)
        	{
        		if (nums[jt] < nums[it]) {
        			index[jt] = nums[it];
        		}
        	}
        }
        

        for (auto it = findNums.begin(); it != findNums.end(); ++it)
        {
        	auto jt = find(nums.begin(), nums.end(), *it);
        	res[it-findNums.begin()] = index[jt-nums.begin()];
        }
        return res;
    }
};

void print(const vector<int>& v)
{
	for (auto a : v)
	{
		cout << a << " ";
	}
	cout << endl;
}

int main()
{
	Solution s;
	vector<int> v1 = {3,5,10,11};
	vector<int> v2 = {10,7,3,6,8,5,9,11};
	vector<int> res = s.nextGreaterElement(v1, v2);
	print(res);
}