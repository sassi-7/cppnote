#include <iostream>
using namespace std;

int main(){
	int i=1, j=2;
	int* p=&i;
	cout<<p<<" : "<<*p<<endl;
	p = &j;
	cout<<p<<" : "<<*p<<endl;
	*p = 11;
	cout<<p<<" : "<<*p<<endl;
	j = 12;
	cout<<p<<" : "<<*p<<endl;
	return 0;
}
