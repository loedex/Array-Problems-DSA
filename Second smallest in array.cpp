#include<iostream>
#include<array>
using namespace std;
class CLASS{
	public:
		int find(int[]);
};
int CLASS::find(int arr[]){
	int smallest,Second;
	smallest=arr[0];
	Second=INT_MAX;
	for(int i=1;i<6;i++){
		if(arr[i]<smallest){
			Second=smallest;
			smallest=arr[i];
		}
		else if((arr[i]>smallest)&&(arr[i]<Second)){
			Second=arr[i];
		}
	}
	return Second;
}
int main(){
	int ar[6];
	for(int i=0;i<6;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>ar[i];
	}
	CLASS obj;
	cout<<endl<<"Second Smallest Element: "<<obj.find(ar);
	return 0;
}