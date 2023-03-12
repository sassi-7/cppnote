#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vr;
	int i;
	char ch;
	while(cin>>i){
		vr.push_back(i);
		cout<<"是否继续输入？(y or n)"<<endl;
		cin>>ch;
		if(ch != 'y' && ch != 'Y')break;
	}

	for(auto c : vr)
	  cout<<c<<" ";
	cout<<endl;
	return 0;
}
