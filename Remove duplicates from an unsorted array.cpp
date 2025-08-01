#include<iostream>
#include<array>
using namespace std;
class Solution{
	public:
		int find(int[]);
};
int Solution::find(int arr[]){
	int length=8;
	for(int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			if(arr[j]==arr[i]){
				for(int k=j;k<length;k++){
					arr[k]=arr[k+1];
				}
				length--;
			}
		}
	}
	cout<<"\nUpdated Array: \n";
	for(int i=0;i<length;i++){
		cout<<arr[i]<<"\t";
	}
	return length;
}
int main(){
	int ar[8];
	for(int i=0;i<8;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>ar[i];
	}
	int n;
	Solution obj;
	n=obj.find(ar);
	cout<<endl<<"\tUnique Elements: "<<n;
	return 0;
}