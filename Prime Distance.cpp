#include <iostream>
#include <vector>
using namespace std;
vector <int> prime;
int limit=1000000;
int visit[1000000]={};

void generate(){
	for(int i=0;i<limit;i++){
		visit[i]=0;
	}
	
	for(int i=2;i<limit;i++){
		if(!visit[i]){
			prime.push_back(i);
			for(int j=i;j<limit;j+=i){
				visit[j]=1;
			}
		}
	}
}

int main(){
	generate();
	int a,b;
	while(cin>>a>>b){
		vector <int> range;
//		cout<<a<<" "<<b<<endl;
		for(int i=0;i<prime.size();i++){
//			cout<<"PRIME: "<<prime[i]<<endl;
			if(a<=prime[i] && prime[i]<=b){
//				cout<<"ENTER"<<endl;
				range.push_back(prime[i]);
			}
			if(b<prime[i])break;
		}
//		cout<<"SIZE "<<range.size()<<endl;
		if(range.size()==1 ||  range.size()==0){
			cout<<"There are no adjacent primes."<<endl;
			continue;
		}
	
		int s1,s2,l1,l2;
		int sm=999999;
		int lg=0;
		for(int i=1;i<range.size();i++){
			int diff=range[i]-range[i-1];
			if(diff>lg){
				lg=diff;
				l1=range[i-1];
				l2=range[i];
			}
			if(diff<sm){
				sm=diff;
				s1=range[i-1];
				s2=range[i];
			}
		}
		cout<<s1<<","<<s2<<" are closest, "<<l1<<","<<l2<<" are most distant."<<endl;
	}
	
	return 0;
}
