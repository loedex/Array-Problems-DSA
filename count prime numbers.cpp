#include<iostream>
using namespace std;
class FIND{
	private:
		int arr[5],flag,count,p;
		public:
			FIND();
			void FindPrime();
};
FIND::FIND(){
	flag=0;
	count=0;
	p=0;
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<"value :\n";
		cin>>arr[i];
	}
}
void FIND::FindPrime(){
	for(int i=0;i<5;i++){
		for(int j=2;j<=arr[i]/2;j++)
			if(arr[i]%j==0){
			 p=1;
			 break;
			}
			if(p==0)
			count++;
		
	}
	cout<<"Total Prime Numbers : "<<count;
}
int main(){
	FIND obj;
	obj.FindPrime();
	return 0;
}