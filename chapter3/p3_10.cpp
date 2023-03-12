#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str;
	cout<<"输入一个带标点符号的字符串："<<endl;
	getline(cin, str);

	/* //法一：边去除标点符号边逐个输出
	for(auto c : str){
	  if(ispunct(c))continue;
	  cout<<c;
	} 
	cout<<endl; */

	//法二：去除标点符号后拼接起来
	string result;
	for(auto c : str){
	  if(ispunct(c))continue;
	  result += c;
	}
	cout<<result<<endl;	

	return 0;
}
