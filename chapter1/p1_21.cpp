#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item b1, b2;
	cout<<"请输入两条isbn相同的销售记录(isbn、销售量、单本售价)："
		<<endl;
	cin>>b1>>b2;
	if(compareIsbn(b1, b2))
	  cout<<"汇总：isbn、售出本数、销售额和平均售价："
		<<b1 + b2<<endl;
	else 
	  cout<<"两条销售纪录的isbn不同"<<endl;
	return 0;
}
