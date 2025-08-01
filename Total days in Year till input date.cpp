/*Write a program that inputs current day and month from the user. It ythen calculates and displays the total number of 
days in the currenty year till thew entered date.*/
#include<iostream>
#include<array>
using namespace std;
class CLASS{
	private:
		array<int,12>arr={31,28,31,30,31,30,31,31,30,31,30,31};
		int Day,month,totalDays=0;
		public:
			void input();
			void calc();
};
void CLASS::input(){
	cout<<"Enter Current month :\n";
	cin>>month;
	cout<<"Enter Current day :\n";
	cin>>Day;
}
void CLASS::calc(){
	for(int i=0;i<=month-2;i++){
		totalDays+=arr[i];
	}
	totalDays+=Day;
	cout<<endl<<"\t"<<totalDays;
}
int main(){
	CLASS obj;
	obj.input();
	obj.calc();
	return 0;
}
