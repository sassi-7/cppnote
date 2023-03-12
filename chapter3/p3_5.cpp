#include <iostream>
#include <string>
using namespace std;

int main(){
	string str, result;
	char ch;
	/*
	cout<<"请输入第一个字符串："<<endl;
	while(cin>>str){
		result += str;
		cout<<"继续输入请选择y，否则n"<<endl;
		cin>>ch;
		if(ch == 'y' || ch == 'Y')
		  cout<<"请输入下一个字符串："<<endl;
		else break;
	}
	cout<<"拼接后的字符串："<<result<<endl;  */
	
	cout<<"请输入第一个字符串："<<endl;
	while(cin>>str){
		//第一个拼接的字符串之前不加空格
		if(!result.size())
		  result += str;
		else{
		  result = result + " " + str;
		}
		cout<<"继续输入请选择y，否则n"<<endl;
		cin>>ch;
		if(ch == 'y' || ch == 'Y')
		  cout<<"请输入下一个字符串："<<endl;
		else break;
	}
	cout<<"拼接后的字符串："<<result<<endl;
	return 0;
}
