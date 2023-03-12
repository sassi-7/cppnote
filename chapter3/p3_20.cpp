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
	for(decltype(vt.size()) j=0; j < vt.size()-1; j+=2){
	  cout<<vt[j] + vt[j+1]<<" ";
	
	//每行5个
	if((i+2)%10==0)cout<<endl;
	}

	//如果总个数是奇数，处理剩下的最后一个
	if(vt.size()%2 != 0)
	  cout<<vt[vt.size()-1]<<endl; */

	//输出第一个与到数第一个之和，以此类推
	cout<<"请输入一组整数："<<endl;
	while(cin>>i)
	  vt.push_back(i);
	if(vt.size()==0){
	  cout<<"没有任何元素"<<endl;
	  return -1;
	}
	
	cout<<"首尾两项的和依次为："<<endl;
	for(decltype(vt.size()) j=0; j < vt.size()/2; j++){
	  cout<<vt[j] + vt[vt.size()-1-j]<<" ";
	
	//每行5个
	if((i+2)%10==0)cout<<endl;
	}
	
	//如果元素数是奇数，单独处理最后一个
	if(vt.size()%2 != 0)
	  cout<<vt[vt.size()/2]<<endl;
	return 0;
}

