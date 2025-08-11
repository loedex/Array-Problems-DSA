#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
	public:
		vector<int> Find(vector<int>&numbers,int target);
};
vector<int> Solution::Find(vector<int>&numbers,int target){
	int i=0;
	int j=numbers.size()-1;
	while(i<j){
		if(target==(numbers[i]+numbers[j])){
			return {i+1,j+1};
		}
		else if(target<(numbers[i]+numbers[j])){
			j--;
		}
		else{
			i++;
		}
	}
	return {};
}
int main(){
	int size,target;
	cout<<"Enter Size of array: ";
	cin>>size;
	vector<int>numbers(size);
	for(int i=0;i<size;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>numbers[i];
	}
	cout<<endl<<"Enter Target Value: ";
	cin>>target;
	Solution obj;
	vector<int>R=obj.Find(numbers,target);
	cout<<"\nResult\n";
	for(auto i:R){
		cout<<i<<"\t";
	}
	return 0;
}