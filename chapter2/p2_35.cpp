#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	cout<<typeid(i).name()<<endl;
	cout<<typeid(j).name()<<endl;
	cout<<typeid(k).name()<<endl;
	cout<<typeid(p).name()<<endl;
	cout<<typeid(j2).name()<<endl;      //这是个整型常量，
	cout<<typeid(k2).name()<<endl;	     //这是个整型常量
	//k2 = 20;     //编译的时候会报错，提示其为只读变量的分配，即常量
	return 0;
}

