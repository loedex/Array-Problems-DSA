#include<iostream>
using namespace std;
class Solution{
	public:
		void find(int (&arr)[5]);
};
void Solution::find(int (&arr)[5]){
	int i=0;
	for(int j=0;j<5;j++){
		if(arr[j]!=0){
			swap(arr[i],arr[j]);
			i++;
		}
	}
}
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>arr[i];
	}
	Solution obj;
	obj.find(arr);
	cout<<endl<<"Updated Array.\n";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<"\t";
	}
	return 0;
}