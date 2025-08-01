#include<iostream>
using namespace std;
class Solution{
	public:
		void find(int[]);
};
void Solution::find(int arr[]){
	int n=5;
	for(int i=0;i<n;i++){
		for(int j=0;j<=n-i-2;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<"\nUpdated Array:\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
int main(){
	int ar[5];
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>ar[i];
	}
	Solution obj;
	obj.find(ar);
	return 0;
}