//Intersection of two sorted arrays
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution{
	public:
	vector<int> Find(vector<int>&V1,vector<int>&V2);
};
vector<int> Solution::Find(vector<int>&V1,vector<int>&V2){
	sort(V1.begin(),V1.end());
	sort(V2.begin(),V2.end());
	int i,j;
	i=j=0;
	vector<int>U;
	while(i<V1.size() && j<V2.size()){
		if(V1[i]==V2[j]){
			if(U.empty() || V1[i]!=U.back()){
				U.push_back(V1[i]);
			}
			i++;
			j++;
		}
		else if(V1[i]<V2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return U;
}
int main(){
	int n1,n2;
	cout<<"Enter Size of Array-1: ";
	cin>>n1;
	cout<<"Enter Size of Array-2: ";
	cin>>n2;
	vector<int>V1(n1);
	vector<int>V2(n2);
	cout<<endl;
	for(auto& i:V1){
		cout<<"Enter value of Array-1: ";
		cin>>i;
	}
	for(auto& i:V2){
		cout<<"Enter value of Array-2: ";
		cin>>i;
	}
	Solution obj;
	cout<<"Updated Array\n\n";
	vector<int>U=obj.Find(V1,V2);
	for(auto i:U){
		cout<<i<<"\t";
	}
	return 0;
}