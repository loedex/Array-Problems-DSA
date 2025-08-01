//Find Second Largest Element in an array (More Optimized Solution) 
#include<iostream>
#include<array>
using namespace std;
class CLASS{
	public:
		int find(int[]);
};
int CLASS::find(int arr[]){
	int largest,SecLargest;
	largest=arr[0];
	SecLargest=-31433;
	for(int i=1;i<6;i++){
		if(arr[i]>largest){
			SecLargest=largest;
			largest=arr[i];
		}
		else if((arr[i]<largest)&&(arr[i]>SecLargest)){
			SecLargest=arr[i];
		}
	}
	return SecLargest;
}
int main(){
	int ar[6];
	for(int i=0;i<6;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>ar[i];
	}
	CLASS obj;
	cout<<endl<<"Second Largest Element: "<<obj.find(ar);
	return 0;
}