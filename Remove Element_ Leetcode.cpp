#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
	public:
		int Find(vector<int>&nums,int val);
};
int Solution::Find(vector<int>&nums,int val){
	int i,j;
	i=0;
	j=0;
	int n=nums.size();
	while(j<n){
		if(nums[j]!=val){
			nums[i]=nums[j];
			i++;
		}
		j++;
	}
	nums.resize(i);
	return nums.size();
}
int main(){
	int val;
	int size;
	cout<<"Enter Size: ";
	cin>>size;
	vector<int>nums(size);
	for(int i=0;i<size;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>nums[i];
	}
	cout<<endl<<"Enter Value to Remove: ";
	cin>>val;
	Solution obj;
	cout<<"\nNew Length: "<<obj.Find(nums,val);
	return 0;
}