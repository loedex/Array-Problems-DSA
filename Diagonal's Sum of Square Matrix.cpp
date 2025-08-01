//Write a program that inputs integer values in a 4x4 matrix and displays the sum of diagonal elements of the matrix.
#include<iostream>
#include<array>
using namespace std;
class MATRIX{
	private:
		array<array<int,4>,4>matrix;
		int sum=0;
		public:
			void input();
			void calc();
			void display();
};
void MATRIX::input(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Enter "<<i+1<<"x"<<j+1<<" value: ";
			cin>>matrix[i][j];
		}
	}
}
void MATRIX::calc(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				sum+=matrix[i][j];
			}
		}
	}
}
void MATRIX::display(){
	cout<<endl<<"Sum of diagonal values: "<<sum;
}
int main(){
	MATRIX obj;
	obj.input();
	obj.calc();
	obj.display();
	return 0;
}