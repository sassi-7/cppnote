#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(){
	vector<string> vt;
	string str;
	char ch;
	cout<<"请输入第一个词："<<endl;
	while(cin>>str){
	  for(auto &c : str)
		c = toupper(c);
	  vt.push_back(str);
	  cout<<"是否继续输入(y or n)？"<<endl;
	  cin>>ch;
	  if(ch != 'y' && ch != 'Y')break;
	}

	for(auto e : vt)
	  cout<<e<<endl;
	return 0;
}
