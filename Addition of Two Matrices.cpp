/*Write a program to add two matrices. Input order of matrix (i.e. number of rows and columns). The matrices must be
of same size to be added. Get the input for each element of the first matrix and then second matrix. Add two matrices 
and store the values in a third matrix. Finally display all matrices.*/
#include<iostream>
#include<array>
using namespace std;
class ADDITION{
	private:
		array<array<int,50>,50>A;
		array<array<int,50>,50>B;
		array<array<int,50>,50>R;
		int r1,c1,r2,c2;
		public:
			void input();
			void calc();
			void display();
};
void ADDITION::input(){
	cout<<endl<<"Enter number of rows for matrix A : ";
	cin>>r1;
	cout<<endl<<"Enter number of columns for matrix A : ";
	cin>>c1;
	cout<<endl<<"Enter number of rows for matrix B : ";
	cin>>r2;
	cout<<endl<<"Enter number of columns for matrix B : ";
	cin>>c2;
	if((r1!=r2)||(c1!=c2)){
		cout<<endl<<"Matrix Addition is not possible.";
		exit(0);
	}
	cout<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<"Enter "<<i+1<<"x"<<j+1<<" value of Matrix A : ";
			cin>>A[i][j];
		}
	}
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cout<<"Enter "<<i+1<<"x"<<j+1<<" value of Matrix B : ";
			cin>>B[i][j];
		}
	}
}
void ADDITION::calc(){
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			R[i][j]=A[i][j]+B[i][j];
		}
	}
}
void ADDITION::display(){
	cout<<"\nMatrix A:\n";
	for(int i=0;i<r1;i++){
		cout<<endl;
		for(int j=0;j<c1;j++){
			cout<<A[i][j]<<"\t";
		}
	}
	cout<<"\n\nMatrix B:\n";
	for(int i=0;i<r2;i++){
		cout<<endl;
		for(int j=0;j<c2;j++){
			cout<<B[i][j]<<"\t";
		}
	}
	cout<<endl<<endl<<"\t"<<"Resultant Matrix : \n";
	for(int i=0;i<r1;i++){
		cout<<endl;
		for(int j=0;j<c2;j++){
			cout<<"\t"<<R[i][j]<<"\t";
		}
	}
}
int main(){
	ADDITION obj;
	obj.input();
	obj.calc();
	obj.display();
	return 0;
}