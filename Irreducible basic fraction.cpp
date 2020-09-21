#include <iostream>
#include <cmath>
using namespace std;
#include <vector>
vector <int> prime;
int visit[1000000]={};
void generate(){
	for(int i=2;i<1000000;i++){
		if(!visit[i]){
			prime.push_back(i);
			for(int j=i;j<1000000;j+=i){
				visit[j]=1;
			}
		}
	}
}

int fact[1000000]={};
int main(){
	generate();
	long long n;
	while(cin>>n){
		if(!n)break;
		for(int i=0;i<1000000;i++){
			fact[i]=0;			
		}
		vector <int> part;
//		cout<<prime.size();
		for(int i=0;i<prime.size();i++){
			if(prime[i]>n)break;
			if(n%prime[i]==0){
//				cout<<prime[i]<<endl;
				part.push_back(prime[i]);
				while(n%prime[i]==0){
					n/=prime[i];
					fact[prime[i]]++;
				}
			}
		}
		
		long long ans=1;
//		cout<<part.size()<<endl;
		for(int i=0;i<part.size();i++){
//			cout<<"ANS: "<<ans<<endl;
			int cnt=fact[part[i]];
			int num=part[i];
			if(cnt>1)ans*= (pow(num,cnt)-pow(num,cnt-1));
			else ans*=(num-1);	
		}
		
		if(n>1){
			cout<<ans*n-ans<<endl;
		}
		else cout<<ans*n<<endl;
		
	}
}
