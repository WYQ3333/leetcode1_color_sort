#include<iostream>
#include<vector>

using namespace std;


class Solution1 {
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

class Solution2 {
public:
	void sortColors(vector<int>& nums) {
		//Ë«Ö¸Õë
		int low = 0, high = nums.size() - 1;
		int i = 0;
		while (i <= high){
			if (nums[i] == 0){
				int tmp = nums[i];
				nums[i] = nums[low];
				nums[low] = tmp;
				++low; ++i;
			}
			else if (nums[i] == 1){
				++i;
			}
			else if (i <= high && nums[i] == 2){
				int tmp = nums[i];
				nums[i] = nums[high];
				nums[high] = tmp;
				--high;
			}
		}
	}
};

int main(){
	vector<int> array = { 0, 1, 2, 2, 1, 1, 1, 0, 0, 2 };
	Solution1 s1;
	s1.sortColors(array);

	Solution1 s2;
	s2.sortColors(array);
	int i = 0;
	for (i = 0; i < array.size(); ++i){
		cout << array[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}