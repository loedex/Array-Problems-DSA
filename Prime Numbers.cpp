/*Write a program that inputs five numbers from the user and find out that how many
of them are prime numbers.*/
#include<iostream>
#include<array>
using namespace std;
class CLASS{
	private:
		array<int,5>arr;
		int flag,count;
		public:
			CLASS();
			void input();
			void calc();
			void display();
};
CLASS::CLASS(){
	count=flag=0;
}
void CLASS::input(){
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<" number : ";
		cin>>arr[i];
	}
}
void CLASS::calc(){
	for(int i=0;i<5;i++){
		for(int j=2;j<=arr[i]/2;j++){
			if(arr[i]%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			count++;
		}
	}
}
void CLASS::display(){
	cout<<endl<<"Prime Numbers in array : "<<count;
}
int main(){
	CLASS obj;
	obj.input();
	obj.calc();
	obj.display();
	return 0;
}