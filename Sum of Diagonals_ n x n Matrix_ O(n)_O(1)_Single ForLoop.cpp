#include<iostream>
#include<vector>
using namespace std;
class Solution{
	public:
	int Find(vector<vector<int>>&matrix);
};
int Solution::Find(vector<vector<int>>&matrix){
	int size=matrix.size();
	int SumL,SumR;
	SumL=SumR=0;
	for(int i=0;i<size;i++){
		SumL+=matrix[i][i];
		SumR+=matrix[i][size-i-1];
	}
	if((size%2)!=0){
		SumR=SumR-matrix[size/2][size/2];
	}
	return (SumL+SumR);
}
int main(){
	int r,c;
	cout<<"Enter Number of Rows: ";
	cin>>r;
	cout<<"Enter Number of Columns: ";
	cin>>c;
	vector<vector<int>>Matrix(r,vector<int>(c));
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter "<<i<<"x"<<j<<" value";
			cin>>Matrix[i][j];
		}
	}
	Solution obj;
	cout<<endl;
	cout<<"Sum of Diagonals : "<<obj.Find(Matrix);
	return 0;
}