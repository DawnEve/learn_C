//running-sum-of-1d-array/
#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
	vector<int> result(nums.size(), 0);
	auto current=result.begin();
	int sum=0;
	
	for(auto be=nums.begin(); be != nums.end(); ++be){
		sum += *be;
		*current++ = sum;
	}
	
    return result;
}


int main(){
	vector<int> arr={1,2,3,4};
	vector<int> res = runningSum(arr);
	
	for(auto be=res.begin(); be<res.end(); ++be){
		cout << *be << endl;
	}
	
	return 0;
}