/*Write a program that inputs integer values in an array of 2 rows and 4 columns and 
then displays the minimum and maximum number in the array.*/
#include<iostream>
#include<array>
using namespace std;
class CLASS{
	private:
		array<array<int,4>,2>arr2D;
		int min,max;
		public:
			void input();
			void calc();
			void show();
};
void CLASS::input(){
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cout<<"Enter "<<i+1<<"x"<<j+1<<" value : ";
			cin>>arr2D[i][j];
		}
	}
}
void CLASS::calc(){
	min=max=arr2D[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			if(arr2D[i][j]<min){
				min=arr2D[i][j];
			}
			if(arr2D[i][j]>max){
				max=arr2D[i][j];
			}
		}
	}
}
void CLASS::show(){
	cout<<endl<<"Maximum number : "<<max;
	cout<<endl<<"Miniumum number : "<<min;
}
int main(){
	CLASS obj;
	obj.input();
	obj.calc();
	obj.show();
	return 0;
}