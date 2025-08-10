#include<iostream>
#include<vector>
using namespace std;
class Solution{
	public:
		void Find(vector<int>&nums1,int m, vector<int>&nums2,int n);
};
void Solution::Find(vector<int>&nums1,int m,vector<int>&nums2,int n){
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(j>=0){
		if((i>=0)&&(nums1[i]>nums2[j])){
			nums1[k]=nums1[i];
			i--;
			k--;
		}
		else{ //if(nums2[j]>=nums1[i]) and i may be less then zero.
			nums1[k]=nums2[j];
			k--;
			j--;
		}
	}
}
int main(){
	int size1,size2;
	cout<<"Enter First Array Size: ";
	cin>>size1;
	cout<<endl<<"Enter Second Array Size: ";
	cin>>size2;
	vector<int>nums1(size1);
	vector<int>nums2(size2);
	cout<<endl;
	for(int i=0;i<size1;i++){
		cout<<"Enter "<<i+1<<" value of Array 1: ";
		cin>>nums1[i];
	}
	int m;
	cout<<"Enter Number of elements you entered in nums1 except zeros: ";
	cin>>m;
	int n=size2;
	for(int j=0;j<size2;j++){
		cout<<"Enter "<<j+1<<" value of Array 2: ";
		cin>>nums2[j];
	}
	Solution obj;
	obj.Find(nums1,m,nums2,n);
	cout<<endl<<"Updated Array.\n";
	for(int i=0;i<size1;i++){
		cout<<nums1[i]<<"\t";
	}
	return 0;
}