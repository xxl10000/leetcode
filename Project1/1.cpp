#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#include<unordered_map>
class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {
		vector<int> Result;
		int length = nums.size();
		for (size_t i = 0; i < length - 1; i++)
		{
			for (size_t j = i + 1; j < length; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					Result.push_back(i);
					Result.push_back(j);
					return Result;
				}
			}
		}
		return Result;
		// nothing!

		//just use the code!
		
        
    }

	/*int Cmp(void *a, void *b)
	{
		return *(int *)a - *(int *)b;
	}*/
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> mymap;
		vector<int> V;
		int Number2;
		int length;
		for (size_t i = 0; i < (length = nums.size()); i++)
		{
			Number2 = target - nums[i];
			unordered_map<int, int>::iterator It;
			It = mymap.find(Number2);
			if (It != mymap.end())
			{
				V.push_back(It->second);
				V.push_back(i);
				
				return V;
			}
			else
			{
				mymap[nums[i]] = i;
			}
		}
		throw new logic_error("No two sum solution");


	}

	//can't sort!!
	/*vector<int> twoSum(vector<int>& nums, int target) { 
		sort(nums.begin(), nums.end());
		int l = 0, r = nums.size() - 1;
		while (l < r)
		{
			if (nums[l] + nums[r] > target)
			{
				r--;
			}
			else if (nums[l] + nums[r] < target)
			{
				l++;
			}
			else
			{
				return { l, r };
			}
		}
		throw new logic_error("NULL");


	}*/

};

int main()
{
	Solution Obj;
	vector<int> A = { 3,2,3 };
	vector<int> B = Obj.twoSum(A, 6);
	cout << B[0]<<B[1] << endl;
	system("pause");
	return 0;
}