#include<bits/stdc++.h>
using namespace std;
void reverseString(string& str){
    for(int i=0;i<str.length()/2;i++){
    	swap(str[i],str[str.length()-1-i]);
	}
}
int main(){
	string str;
	cin>>str;
	reverseString(str);
	cout<<"The reverse of the string is= "<<str;
	return 0;
}
