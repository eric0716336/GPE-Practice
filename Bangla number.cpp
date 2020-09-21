#include <iostream>
using namespace std;
int kuti=10000000;
int lakh=100000;
int hajar=1000;
int shata=100;
void bangla(long long n){
	if(n/kuti){
		bangla(n/kuti);
		n%=kuti;
		cout<<" kuti";
	}
	if(n/lakh){
		bangla(n/lakh);
		n%=lakh;
		cout<<" lakh";
	}
	if(n/hajar){
		bangla(n/hajar);
		n%=hajar;
		cout<<" hajar";
	}
	if(n/shata){
		bangla(n/shata);
		n%=shata;
		cout<<" shata";
	}
	if(n){
		cout<<" "<<n;
	}
	
	
}

int main(){
	long long n;
	int kas=1;
	while(cin>>n){
		cout<<kas++<<".";
		if(!n)cout<<" "<<0;
		bangla(n);
		cout<<endl;
	}
	
}
