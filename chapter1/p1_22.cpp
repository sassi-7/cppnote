#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item book,total;
	cout<<"请输入几条isbn相同的销售纪录："<<endl;
	if(cin>>book){
	  total = book;
	  while(cin>>book){
	    if(compareIsbn(total, book))
		total += book;
	    else{
		cout<<"isbn不同"<<endl;	
		return -1;
	     }	
	  }
	  cout<<"汇总：isbn、售出本数、销售额和平均售价："<<total<<endl;
	}
	else{
	  cout<<"没有数据"<<endl;
	  return -1;
	}
	return 0;
}
