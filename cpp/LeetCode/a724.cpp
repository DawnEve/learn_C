//a724.cpp
#include<iostream>
#include<vector>
using namespace std;


int pivotIndex(vector<int>& nums) {
	// get sum 
	int sum = 0;
	for(auto i: nums){
		sum+= i;
	}
	// calc cumsum
	int index=0, cumsum=0;
	for(auto be=nums.begin(); be<nums.end(); be++){
		if(sum - *be == 2*cumsum){
			return index;
		}
		index++;
		cumsum += *be;
	}
	return -1;
}



int main(){
	//vector<int> arr={1,7,3,6,5,6};
	vector<int> arr={2,1,-1};
	
	
	// print array
	for(auto i : arr){
		cout << i << " ";
	}
	cout << endl;
	
	int index=pivotIndex(arr);
	// output
	cout << "index:" << index << endl;
}
