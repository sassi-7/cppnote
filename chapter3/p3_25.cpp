#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	while(cin>>grade){
	  (*(it + (grade/10)))++;
	  //或者这样，因为解引用的优先级更低
	  ++*(it + (grade/10));
	  
	}
	for(auto i : scores)
	  cout<<i<<" ";
	return 0;
}
