#include<iostream>
using namespace std;
class Solution{
	public:
	void reverse(int (&arr)[7],int,int);
	void find(int (&arr)[7],int,int);
};
void Solution::find(int (&arr)[7],int k,int n){
	k=k%n;
	reverse(arr,0,k-1);
	reverse(arr,k,n-1);
	reverse(arr,0,n-1);
}
void Solution::reverse(int (&arr)[7],int start,int end){
	while(start<=end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
int main(){
	int arr[7];
	for(int i=0;i<7;i++){
		cout<<"Enter "<<i+1<<" element: ";
		cin>>arr[i];
	}
	Solution obj;
	obj.find(arr,5,7);
	cout<<"Updated Array:\n";
	for(int i=0;i<7;i++){
		cout<<arr[i]<<"\t";
	}
	return 0;
}