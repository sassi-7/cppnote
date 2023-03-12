#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str;	
	getline(cin, str);
	for(auto &c : str)
	  c = 'X';
	cout<<str<<endl;

	return 0;
}


/*
 *编译时须指定c11标准，因为范围for语句是c11的新特性
 *g++ -o main source.cpp -std=c++11
*/

