#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
	public:
		int Find(int);
};
int Solution::Find(int x){
	int reverse=0;
	int Rdigit;
	while(x!=0){
		Rdigit=x%10;
		x=x/10;
		if((reverse>INT_MAX) || ((reverse==INT_MAX/10) && (Rdigit>7))){
			return 0;
		}
		if((reverse<INT_MIN) || ((reverse==INT_MIN/10) && (Rdigit<-8))){
			return 0;
		}
		reverse=reverse*10+Rdigit;
	}
	return reverse;
}
int main(){
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	Solution obj;
	int R=obj.Find(num);
	cout<<endl<<"Returned Value: "<<R;
	return 0;
}