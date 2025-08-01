//Write a program that inputs ten numbers from the user in an array and displays the maximum number.
#include<array>
#include<iostream>
using namespace std;
class CLASS{
	private:
		array<int,10>arr;
		int max;
		public:
			void input();
			void calc();
			void display();
};
void CLASS::input(){
	for(int i=0;i<10;i++){
		cout<<"Enter "<<i+1<<" number :";
		cin>>arr[i];
	}
}
void CLASS::calc(){
	max=arr[0];
	for(int i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
}
void CLASS::display(){
	cout<<endl<<"Maximum Number is :"<<max;
}
int main(){
	CLASS obj;
	obj.input();
	obj.calc();
	obj.display();
	return 0;
}