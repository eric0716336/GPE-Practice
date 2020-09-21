#include <iostream>
using namespace std;

int main(){
	long long s,d;
	while(cin>>s>>d){
		long long sum=s;
		while(sum<d){
			s++;
			sum+=s;
//			if(sum>=d)break;
		}
		cout<<s<<endl;
	}
	return 0;
}
