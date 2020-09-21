#include <iostream>
using namespace std;

int cat(int n){
	if(n<1)return 1;
	
	int res=0;
	for(int i=0;i<n;i++){
		res+=cat(i)*cat(n-i-1);
	}
	return res;
}

int main(){
	int n;
	int kas=0;
	while(cin>>n){
		if(kas++)cout<<endl;
		cout<<cat(n)<<endl;
	}
}
