#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vt;
	int i;
	
	
	/* //输出相邻之和
	char ch;	
	cout<<"请输入第一个整数："<<endl;
	while(cin>>i){
	  vt.push_back(i);
	  cout<<"是否继续输入（y or n）？"<<endl;
	  cin>>ch;
	  if(ch != 'y' && ch != 'Y')break;
	}
	
	if(vt.size() == 0){
	  cout<<"没有任何元素"<<endl;
	  return -1;
	}

	cout<<"相邻两项的和依次是："<<endl;
	auto beg = vt.cbegin();
	auto end = vt.cend();
	for(; beg < end; beg+=2){
	  cout<<*beg + *(beg+1)<<" ";
	
	//每行5个
	if((beg - vt.begin() + 1)%5==0)cout<<endl;
	}

	//如果总个数是奇数，处理剩下的最后一个
	if(vt.size()%2 != 0)
	  cout<<vt[vt.size()-1]<<endl; */

	//输出第一个与倒数第一个之和，以此类推
	cout<<"请输入一组整数："<<endl;
	while(cin>>i)
	  vt.push_back(i);
	if(vt.begin() == vt.end()){
	  cout<<"没有任何元素"<<endl;
	  return -1;
	}
	
	cout<<"首尾两项的和依次为："<<endl;
	auto beg = vt.cbegin();
	auto end = vt.cend();
	for(; beg != (end-(vt.end()-vt.begin())/2); beg++){
	  cout<<*beg + *(end - (beg-vt.begin()) - 1)<<" ";
	
	//每行5个
	if((beg - vt.begin() + 1)%5==0)cout<<endl;
	}
	
	//如果元素数是奇数，单独处理最后一个
	if((vt.end() - vt.begin())%2 != 0)
	  cout<<*(end-(vt.end()-vt.begin())/2)<<endl; 
	return 0;
}

