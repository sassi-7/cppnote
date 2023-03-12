#include <iostream>
#include <uchar.h>
#include <stdint.h>
using namespace std;

int main(){
	cout<<"类型 "<<"占用字节"<<endl;
	cout<<"bool:"<<sizeof(bool)<<endl;
	cout<<"short:"<<sizeof(short)<<endl;
	cout<<"int:"<<sizeof(int)<<endl;
	cout<<"int8_t:"<<sizeof(int8_t)<<endl;
	cout<<"int16_t:"<<sizeof(int16_t)<<endl;
	cout<<"int32_t:"<<sizeof(int32_t)<<endl;
	cout<<"int64_t:"<<sizeof(int64_t)<<endl;
	cout<<"long:"<<sizeof(long)<<endl;
	cout<<"long long:"<<sizeof(long long)<<endl;
	cout<<"char:"<<sizeof(char)<<endl;
	cout<<"char16_t:"<<sizeof(char16_t)<<endl;
	cout<<"char32_t:"<<sizeof(char32_t)<<endl;
	cout<<"wchar_t:"<<sizeof(wchar_t)<<endl;
	cout<<"float:"<<sizeof(float)<<endl;//单精度浮点数
	cout<<"double:"<<sizeof(double)<<endl;//双精度浮点数
	cout<<"long double:"<<sizeof(long double)<<endl;//扩展精度浮点数
	return 0;
}










