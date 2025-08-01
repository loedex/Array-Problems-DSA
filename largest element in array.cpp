#include<iostream>
#include<array>
using namespace std;
class CLASS{
	private:
		array<int,5>arr;
		int largest;
		public:
			void input();
			int find();
};
void CLASS::input(){
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<" value: ";
		cin>>arr[i];
	}
}
int CLASS::find(){
	largest=arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	return largest;
}
int main(){
	CLASS obj;
	obj.input();
	cout<<"Largest Element: "<<obj.find();
	return 0;
}