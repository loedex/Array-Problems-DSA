//Find Second Largest Element in an array (Brute_Force Solution)
#include<iostream>
#include<array>
using namespace std;
class CLASS{
	private:
		array<int,7>arr;
		int largest,SecLargest;
		public:
			int find(int[]);
};
int CLASS::find(int arr[]){
	largest=arr[0];
	for(int i=1;i<7;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	SecLargest=-65530;
	for(int i=0;i<7;i++){
		if((arr[i]>SecLargest) &&(arr[i]!=largest)){
			SecLargest=arr[i];
		}
	}
	return SecLargest;
}
int main(){
	int ar[7];
	for(int i=0;i<7;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>ar[i];
	}
	CLASS obj;
	cout<<endl<<"Second Largest Number: "<<obj.find(ar);
	return 0;
}