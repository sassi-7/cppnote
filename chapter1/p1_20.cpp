#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item book;
	cout<<"请输入销售纪录(isbn、售出本数、单价)："<<endl;
	while(cin>>book){
	  cout<<"isbn、售出本数、销售额和平均售价为："<<book
		<<endl;
	}
	return 0;
}
