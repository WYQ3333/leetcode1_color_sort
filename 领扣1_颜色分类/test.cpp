#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
	void swap(int& p, int& q){
		int cur = p;
		p = q;
		q = cur;
	}
	void sortColors(vector<int>& nums) {
		int i = 0;
		int temp = nums.size()-1;
		int j = 0;
		for (i = 0; i < temp; ++i){
			if (nums[i] == 0){
				swap(nums[j], nums[i]);
				++j;
			}
		}
		for (i = j; i < temp; ++i){
			if (nums[i] == 1){
				swap(nums[j], nums[i]);
				++j;
			}
		}
		for (int h = 0; h <= temp; ++h){
			cout << nums[h] << " ";
		}
		cout << endl;
	}
	
};

int main(){
	vector<int> array = { 0, 1, 2, 2, 1, 1, 1, 0, 0, 2 };
	Solution s;
	s.sortColors(array);

	system("pause");
	return 0;
}