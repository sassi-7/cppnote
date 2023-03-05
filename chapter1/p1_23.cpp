#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item trans1, trans2;
	cout<<"请输入多条销售记录："<<endl;
	if(cin>>trans1){
	  int num=1;
	  while(cin>>trans2){
	    if(trans1.isbn() == trans2.isbn())
		num++;
	    else{
		cout<<trans1.isbn()<<"共有"
			<<num<<"条销售记录"<<endl;
		trans1 = trans2;
		num = 1;
	     }  
	  }
	  cout<<trans1.isbn()<<"共有"
			<<num<<"条销售记录"<<endl;
	}
	else{
	  cerr<<"没有数据"<<endl;
	  return -1;
	}
	return 0;
}
