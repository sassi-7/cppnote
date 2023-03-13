#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> text;
	string str;
	//用getline读取一句话，直接回车会产生一个空串
	while(getline(cin, str))
	  text.push_back(str);
	
	//利用迭代器遍历全部字符串
	for(auto it=text.begin();it!=text.end() && !it->empty();it++){
	   //利用迭代其遍历当前字符串 
	  for(auto it2 = it->begin(); it2 != it->end();it2++)
		*it2 = toupper(*it2);
	  cout<<*it<<endl;	
	}
	return 0;
}
