#include<iostream>
using namespace std;
class CLASS{
	private:
		int arr[2][4];
		public:
			void input();
			void show();
};
void CLASS::input(){
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cout<<"Enter "<<i+1<<"x"<<j+1<<" value :\n";
			cin>>arr[i][j];
		}
	}
}
void CLASS::show(){
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int main(){
	CLASS obj;
	obj.input();
	obj.show();
	return 0;
}