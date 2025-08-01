//Right Rotate an array by K-Places. (Brute Force Approach)
#include<iostream>
using namespace std;
class Solution{
	public:
	void find(int (&arr)[7],int,int);
};
void Solution::find(int (&arr)[7],int k,int n){
	k=k%n;
	int temp[k];
	for(int i=n-k;i<n;i++){
		temp[i-(n-k)]=arr[i];
	}
	//Shifting
	for(int i=n-1;i>=k;i--){
		arr[i]=arr[(i-k)];
	}
	//Putting back
	for(int i=0;i<k;i++){
		arr[i]=temp[i];
	}
}
int main(){
	int arr[7];
	for(int i=0;i<7;i++){
		cout<<"Enter "<<i+1<<" element: ";
		cin>>arr[i];
	}
	Solution obj;
	obj.find(arr,3,7);
	cout<<"Updated Array:\n";
	for(int i=0;i<7;i++){
		cout<<arr[i]<<"\t";
	}
	return 0;
}