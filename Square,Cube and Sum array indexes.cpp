/*Write a program that uses four arrays "numbers", "squares","cubes" and "sums" each consisting of 5 elements. The number array stores
the values of its indexes, the square array stores the squares of its indexes, the "cubes" array stores the cubes of its indexes and 
"sums" array stores the sum of corresponding indexes of three arrays. The program should display the values of all arrays and the total 
of all values in the "sums" array.*/
#include<iostream>
#include<array>
using namespace std;
class CLASS{
	private:
		array<int,5>numbers;
		array<int,5>squares;
		array<int,5>cubes;
		array<int,5>sums;
		int sumsTotal;
		public:
			CLASS();
			void calc();
			void display();
};
CLASS::CLASS(){
	sumsTotal=0;
}
void CLASS::calc(){
	for(int i=0;i<=4;i++){
		numbers[i]=i;
		squares[i]=i*i;
		cubes[i]=i*i*i;
		sums[i]=numbers[i]+squares[i]+cubes[i];
	}
}
void CLASS::display(){
	cout<<"\nnumbers :\t";
	for(int i=0;i<5;i++){
		cout<<numbers[i]<<"\t";
	}
	cout<<"\nsquares :\t";
	for(int i=0;i<5;i++){
		cout<<squares[i]<<"\t";
	}
	cout<<"\ncubes :\t\t";
	for(int i=0;i<5;i++){
		cout<<cubes[i]<<"\t";
	}
	cout<<"\nsums :\t\t";
	for(int i=0;i<5;i++){
		cout<<sums[i]<<"\t";
		sumsTotal+=sums[i];
	}
	cout<<"\nTotal of sums :\t"<<sumsTotal;
}
int main(){
	CLASS obj;
	obj.calc();
	obj.display();
	return 0;
}