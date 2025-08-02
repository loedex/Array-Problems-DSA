#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
	public:
			vector<vector<int>> Find(vector<vector<int>>&V);
};
vector<vector<int>> Solution::Find(vector<vector<int>>&V){
	vector<vector<int>>R(V[0].size(),vector<int>(V.size()));
	for(int i=0;i<V.size();i++){
		for(int j=0;j<V[0].size();j++){
			R[j][i]=V[i][j];
		}
	}
	return R;
}
int main(){
	int r,c;
	cout<<"Enter Number of rows: ";
	cin>>r;
	cout<<"Enter Number of Columns: ";
	cin>>c;
	vector<vector<int>>V(r,vector<int>(c));
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter "<<i<<"x"<<j<<" value: ";
			cin>>V[i][j];
		}
	}
	Solution obj;
	vector<vector<int>>F=obj.Find(V);
	cout<<"Transpose of Matrix: \n";
	for(int i=0;i<F.size();i++){
		for(int j=0;j<F[0].size();j++){
			cout<<F[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;

}