#include<iostream>
#include<array>
using namespace std;
class CLASS{
	private:
		array<int,6>arr;
		public:
			int find(int[]);
};
int CLASS::find(int arr[]){
	if(arr[1]<arr[0]){
		swap(arr[1],arr[0]);
	}
	int LargestNum,SecondNum,ThirdNum;
	LargestNum=arr[1];
	SecondNum=arr[0];
	ThirdNum=-31766;
	for(int i=2;i<6;i++){
		if(arr[i]>LargestNum){
			ThirdNum=SecondNum;
			SecondNum=LargestNum;
			LargestNum=arr[i];
		}
		else if((arr[i]<LargestNum)&&(arr[i]>SecondNum)){
			ThirdNum=SecondNum;
			SecondNum=arr[i];
		}
		else if((arr[i]<SecondNum)&&(arr[i]>ThirdNum)){
			ThirdNum=arr[i];
		}
	}
	return ThirdNum;
}
int main(){
	int ar[6];
	for(int i=0;i<6;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>ar[i];
	}
	CLASS obj;
	cout<<endl<<"Third Largest Element: "<<obj.find(ar);
	return 0;
}
