/*Write a program that inputs the number of rows and columns from the user. It then inputs the elements
to store in the matrix.The program calculates the sum of each row and each column and displays on the screen. If it's
a square matrix, it also calculates the sum of diagonal elements and displays it on screen*/
#include<iostream>
#include<array>
using namespace std;
class MATRIX{
	private:
		array<array<int,50>,50>A;
		int r,c,sum=0;
		public:
			void input();
			void calc();
			void display();
};
void MATRIX::input(){
	cout<<"Enter Number of rows: ";
	cin>>r;
	cout<<"Enter number of columns: ";
	cin>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter "<<i+1<<"x"<<j+1<<" value: ";
			cin>>A[i][j];
		}
	}
}
void MATRIX::calc(){
	for(int i=0;i<r;i++){
		A[i][c]=0;
		for(int j=0;j<c;j++){
			A[i][c]+=A[i][j];
		}
	}
	for(int i=0;i<c;i++){
		A[r][i]=0;
		for(int j=0;j<r;j++){
			A[r][i]+=A[j][i];
		}
	}
	if(r==c){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i==j){
					sum+=A[i][j];
				}
			}
		}
	}
}
void MATRIX::display(){
//	for(int i=0;i<=r;i++){
//		cout<<endl;
//		for(int j=0;j<=c;j++){
//			cout<<A[i][j]<<"\t";
//		}
//	}
	//Print Matrix A and sum of rows first.
	for(int i=0;i<r;i++){
		cout<<endl;
		for(int j=0;j<=c;j++){
			cout<<A[i][j]<<"\t";
		}
	}
	//Now print just sums of columns.
	cout<<endl;
	for(int i=0;i<c;i++){
		cout<<A[r][i]<<"\t";
	}
	if(r==c){
		cout<<endl<<endl<<"Sum of diagonal: "<<sum;
	}
}
int main(){
	MATRIX obj;
	obj.input();
	obj.calc();
	obj.display();
	return 0;
}