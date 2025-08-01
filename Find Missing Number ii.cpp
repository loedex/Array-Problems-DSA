/*Example:
Input: nums = [3,0,1]
Output: 2
Explanation:
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is 
the missing number in the range since it does not appear in nums*/
#include<iostream>
using namespace std;
#include<vector>
class Solution{
	public:
		int Find(vector<int>&V);
};
int Solution::Find(vector<int>&V){
	int SumR,SumG;
	SumR=SumG=0;
	for(int i=1;i<=V.size();i++){
		SumR+=i;
		SumG+=V[i-1];
	}
	return (SumR-SumG);
}
int main(){
	int n;
	cout<<"Enter Size of Array: ";
	cin>>n;
	vector<int>V(n);
	for(auto &i:V){
		cout<<"Enter Number: ";
		cin>>i;
	}
	Solution obj;
	cout<<endl;
	cout<<"Missing Number: "<<obj.Find(V);
	return 0;
}