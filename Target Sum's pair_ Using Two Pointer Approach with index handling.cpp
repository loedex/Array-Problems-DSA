/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
	public:
		vector<int> Find(vector<int>&V, int target);
};
vector<int> Solution::Find(vector<int>&V,int target){
	int n=V.size();
	vector<pair<int,int>>V2;
	for(int i=0;i<n;i++){
		V2.push_back({V[i],i});
	}
	sort(V2.begin(),V2.end());
	int i,j;
	i=0;
	j=n-1;
	while(i<j){
		int sum=V2[i].first+V2[j].first;
			if(target<sum){
				j--;
			}
			else if(target>sum){
				i++;
			}
		else{
			break;
		}
	}
	return {V2[i].second,V2[j].second};
}
int main(){
	int size;
	cout<<"Enter Size: ";
	cin>>size;
	int target;
	cout<<"Enter Target: ";
	cin>>target;
	vector<int>V(size);
	for(int i=0;i<size;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>V[i];
	}
	cout<<endl;
	Solution obj;
	vector<int>Result=obj.Find(V,target);
	for(auto i:Result){
		cout<<i<<"\t";
	}
	return 0;
}
