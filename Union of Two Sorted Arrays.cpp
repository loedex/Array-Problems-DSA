//Union of two Arrays.
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution{
	public:
		vector<int> Find(vector<int>&V1,vector<int>&V2);
};
vector<int> Solution::Find(vector<int>&V1,vector<int>&V2){
	bool var1=is_sorted(V1.begin(),V1.end());
	bool var2=is_sorted(V2.begin(),V2.end());
	if(!var1){
	sort(V1.begin(),V1.end());
    }
	if(!var2){
	sort(V2.begin(),V2.end());
    }
	vector<int>U;
	int i,j;
	i=j=0;
	while((i<V1.size()) && (j<V2.size())){
		if(V1[i]<V2[j]){
			if(U.empty() || V1[i]!=U.back()){
				U.push_back(V1[i]);
			}
			++i;
		}
		else if(V2[j]<V1[i]){
			if(U.empty() || V2[j]!=U.back()){
				U.push_back(V2[j]);
			}
			++j;
		}
		else{
			if(U.empty() || V1[i]!=U.back()){
				U.push_back(V1[i]);
			}
			while (i < V1.size() && V1[i] == V1[i+1]) i++;
            while (j < V2.size() && V2[j] == V2[j+1]) j++;
			i++;
			j++;
		}
	}
	while(i<V1.size()){
		if(U.empty() || V1[i]!=U.back()){
			U.push_back(V1[i]);
		}
		++i;
	}
	while(j<V2.size()){
		if(U.empty() || V2[j]!=U.back()){
			U.push_back(V2[j]);
		}
		++j;
	}
	return U;
}
int main(){
	int n1,n2;
	cout<<"Enter Size of First Array: ";
	cin>>n1;
	cout<<"Enter Size of Second Array: ";
	cin>>n2;
	vector<int>V1(n1);
	vector<int>V2(n2);
	cout<<endl;
	for(int i=0;i<V1.size();i++){
		cout<<"Enter "<<i+1<<" value of Array-1: ";
		cin>>V1[i];
	}
	cout<<endl;
	for(int i=0;i<V2.size(); i++){
		cout<<"Enter "<<i+1<<" value of Array-2: ";
		cin>>V2[i];
	}
	vector<int>U;
	Solution obj;
	U=obj.Find(V1,V2);
	cout<<"Resultant Array\n";
	for(int i=0;i<U.size();i++){
		cout<<U[i]<<"\t";
	}
	return 0;
}