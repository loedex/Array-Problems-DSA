/*Write a program that declares a three dimensional array to store the temperatures of a month. The temperature
is entered for morning, noon and evening of each day.The first dimension should be used for three timings of a day,
 second dimension should be used for seven days of a week and third dimension should be used for four weeks of a month.
 The program should input the temperatures and then display the maximum, minimum, and average temperature of the whole month.*/
 #include<iostream>
 #include<array>
 using namespace std;
 class CLASS{
 	private:
 		array<array<array<int,4>,7>,3>arr3D;
 		int max,min,avg,sum=0;
 		public:
 			void input();
 			void calc();
 			void display();
 };
 void CLASS::input(){
 	for(int i=0;i<3;i++){
 		for(int j=0;j<7;j++){
 			for(int k=0;k<4;k++){
 				cout<<"Enter "<<i+1<<"x"<<j+1<<"x"<<k+1<<" value: ";
 				cin>>arr3D[i][j][k];
			 }
		 }
	 }
 }
 void CLASS::calc(){
 	max=min=arr3D[0][0][0];
 	for(int i=0;i<3;i++){
 		for(int j=0;j<7;j++){
 			for(int k=0;k<4;k++){
 				sum+=arr3D[i][j][k];
 				if(arr3D[i][j][k]<min){
 					min=arr3D[i][j][k];
				 }
				 if(arr3D[i][j][k]>max){
				 	max=arr3D[i][j][k];
				 }
			 }
		 }
	 }
	 avg=sum/(3*7*4);
 }
 void CLASS::display(){
 	cout<<endl<<"Maximum Temperature: "<<max;
 	cout<<endl<<"Minimum Temperature: "<<min;
 	cout<<endl<<"Average Temperature: "<<avg;
 }
 int main(){
 	CLASS obj;
 	obj.input();
 	obj.calc();
 	obj.display();
 	return 0;
 }