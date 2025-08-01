//Left rotate an array by one place.
#include<iostream>
using namespace std;
class Solution{
	public:
		int find(int[]);
};
int Solution::find(int nums[]){
	int length=5;
	int temp=nums[0];
	for(int i=1;i<length;i++){
		nums[i-1]=nums[i];
	}
	nums[length-1]=temp;
	cout<<"Updated Array: \n";
	for(int i=0;i<length;i++){
		cout<<nums[i]<<"\t";
	}
	return 0;
}
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>arr[i];
	}
	Solution obj;
	obj.find(arr);
	return 0;
}