//Left rotate an array by K places. (BruteForce Approach)
#include<iostream>
using namespace std;
class Solution{
	public:
		void find(int[],int,int);
};
void Solution::find(int arr[],int k,int n){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
    	temp[i]=arr[i];
	}
	//Shifting elements back
	for(int i=k;i<n;i++){
		arr[i-k]=arr[i];
	}
	//putting back from temp to arr
	for(int i=n-k;i<n;i++){
		arr[i]=temp[i-(n-k)];
	}
	cout<<"Updated Array: \n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
int main(){
	int ar[7];
	for(int i=0;i<7;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>ar[i];
	}
	Solution obj;
	obj.find(ar,5,7);
	return 0;
}