#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
	public:
		int Find(vector<int>&V,int target);
};
int Solution::Find(vector<int>&V,int target){
	int left,right;
	left=0;
	right=V.size()-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(V[mid]==target){
			return mid;
		}
		else if(V[mid]>target){
			right=mid-1;
		}
		else{ //if(V[mid]<target
			left=mid+1;
		}
	}
	return left;
}
int main(){
	int size;
	cout<<"Enter Size: ";
	cin>>size;
	vector<int>V(size);
	for(int i=0;i<size;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>V[i];
	}
	int target;
	cout<<"Enter Target Value: ";
	cin>>target;
	Solution obj;
	cout<<"Target's index: "<<obj.Find(V,target);
	return 0;
}