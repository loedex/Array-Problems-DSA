/*Write a program that inputs ten floating point numbers in an array. It displays the values which
are greater than the average value of the array.*/
#include<iostream>
#include<array>
using namespace std;
class CLASS{
	private:
		array<float,10>arr;
	    float avg,sum=0;
	    public:
	    	void input();
	    	void calc();
	    	void display();
};
void CLASS::input(){
	for(int i=0;i<10;i++){
		cout<<"Enter "<<i+1<<" number: ";
		cin>>arr[i];
	}
}
void CLASS::calc(){
	for(int i=0;i<10;i++){
		sum+=arr[i];
	}
	avg=sum/10;
}
void CLASS::display(){
	for(int i=0;i<10;i++){
		if(arr[i]>avg){
			cout<<arr[i]<<"\t";
		}
	}
//	cout<<endl<<"Average:"<<avg;
}
int main(){
	CLASS obj;
	obj.input();
	obj.calc();
	obj.display();
	return 0;
}