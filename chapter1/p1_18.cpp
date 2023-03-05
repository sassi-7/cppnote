#include <iostream>
using namespace std;

int main(){
	int val, curval;
	cout<<"请输入一些数："<<endl;
	if(cin>>curval){
	  int cnt=1;
	  while(cin>>val){
		if(val == curval){
		  cnt++;
		}
		else{
		  cout<<curval<<" occurs "<<cnt<<" times"<<endl;
		  cnt = 1;
		  curval = val;
		}
	  }
	  cout<<curval<<" occurs "<<cnt<<" times"<<endl;
	}
	return 0;
}
