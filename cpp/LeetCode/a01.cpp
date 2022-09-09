#include<iostream>
#include<vector>
using namespace std;

//基础版 v1
vector<int> twoSum1(vector<int>& nums, int target) {
	vector<int> result;
	int total=nums.size();
	for(int i=0; i<total; i++){
		for(int j=i+1; j<total; j++){
			if(nums[i] + nums[j] == target){
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
	return result;
}

int main(){
	vector<int> arr={3,2,4};
	int target=6;
	vector<int> result = twoSum(arr, target);
	for(int i=0; i< result.size(); i++){
		printf("%d ", result[i]);
	}
	printf("\n");
}