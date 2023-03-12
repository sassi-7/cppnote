#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str;	
	getline(cin, str);
	
	/* //范围for语句
	for(auto &c : str)
	  c = 'X';   */
	
	/* //传统while循环
	int i=0;
	while(str[i] != '\0'){
	  str[i++] = 'X';
	}	 */

	//传统for循环
	for(string::size_type i=0;i < str.size();i++){
	  str[i] = 'X';
	}
	
	cout<<str<<endl;
	return 0;
}
