#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
	public:
		vector<int> Find(vector<int>&V);
};
vector<int> Solution::Find(vector<int>&V){
	int n=V.size();
	vector<int>R(n);
	int i=0;
	int j=n-1;
	int pos=n-1;
	while(i<=j){
		if(abs(V[i])>abs(V[j])){
			R[pos]=V[i]*V[i];
			i++;
		}
		else{
			R[pos]=V[j]*V[j];
			j--;
		}
//		else{
//			R[pos]=V[i]*V[i];
//			if(i!=j){
//			pos--;
//			R[pos]=V[j]*V[j];
//			j--;
//		   }
//		   i++;
//		}
		pos--;
	}
	return R;
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
	Solution obj;
	vector<int>r=obj.Find(V);
	cout<<"Updated Array: \n";
	for(int i=0;i<size;i++){
		cout<<r[i]<<"\t";
	}
	return 0;
}