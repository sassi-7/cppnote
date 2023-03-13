#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	vector<int> vt;
	srand((unsigned)time(NULL));  //生成随机数种子
	for(int i=0;i < 10; i++)
	  vt.push_back(rand()%1000);   //每次随机生成一个1000以内的数存入vt中
	
	//输出随机生成的10个数
	for(auto it=vt.cbegin(); it != vt.cend(); it++)
	  cout<<*it<<" ";
	cout<<endl;

	//输出翻倍的10个数
	for(auto it=vt.begin(); it != vt.end(); it++){
	  *it*=2;
	  cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}

