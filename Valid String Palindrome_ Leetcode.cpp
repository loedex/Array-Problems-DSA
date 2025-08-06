#include<iostream>
#include<vector>
#include<algorithm>
#include<ctype.h>
using namespace std;
class Solution{
	public:
	bool isPalindrome(string &St);
};
bool Solution::isPalindrome(string &St){
	if(St.size()<=0){
		return true;
	}
	int i=0;
	int j=St.size()-1;
	while(i<j){
		while((i<j) && (!isalnum((unsigned char)St[i]))) ++i;
		while((j>i) && (!isalnum((unsigned char)St[j]))) --j;
		if(St[i]>='A'){
			St[i]=tolower((unsigned)St[i]);
		}
		if(St[j]>='A'){
			St[j]=tolower((unsigned char)St[j]);
		}
		if(St[i]==St[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
	return true;
}
int main(){
	string input;
	cout<<"Enter Sentence: ";
	getline(cin,input);
	Solution obj;
cout<<endl<<"You entered\n\n";
for(int i=0;i<input.size();i++){
	cout<<input[i];
}
cout<<endl<<endl;
	bool R=obj.isPalindrome(input);
	if(!R){
		cout<<"Not Palindrome";
	}
	else{
		cout<<"Palindrome";
	}
	return 0;
	
}