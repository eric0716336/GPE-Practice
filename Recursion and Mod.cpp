#include <iostream>
using namespace std;
long long mod=1000000009;
long long calc(long long n){
	if(n==0)return 1;
	if(n==1)return 3;
	
	long long res= calc(n/2);
	if(n%2==0){
		return (res*res)%mod;
	}
	else return (res*res*3)%mod;
}

int main(){
	long long n;
	while(cin>>n){
		cout<<calc(n)-2<<endl;
	}
}
