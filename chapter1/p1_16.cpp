#include <iostream>
using namespace std;

int main(){
	int value,sum=0;
	//windows下ctrl+z是文件结束符
	//cout<<"请输入一些数，按ctrl+z表示结束："<<endl;
	//unix下ctrl+d是文件结束符
	cout<<"请输入一些数，按ctrl+d表示结束："<<endl; 
	for(;cin>>value;)        //读入一个文件结束符或无效输入（非整数）时结束
		sum += value;
	cout<<"读入的数之和为："<<sum<<endl;
	return 0;
}
