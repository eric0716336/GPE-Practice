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

int sum(int n){
	int res=0;
	while(n){
		res+=n%10;
		n/=10;
	}
	return res;
}

int main(){
	generate();
	int loop;
	cin>>loop;
	while(loop--){
		int a,b;
		cin>>a>>b;
		vector <int> range;
		for(int i=0;i<prime.size();i++){
			if(prime[i]>=a && prime[i]<=b){
				range.push_back(prime[i]);
			}
			if(b<prime[i])break;
		}
		
		int cnt=0;
		for(int i=0;i<range.size();i++){
			int digit=sum(range[i]);
			for(int i=0;i<prime.size();i++){
				if(digit<prime[i])continue;
				if(digit==prime[i]){
					cnt++;
					break;
				}
			}
		}
		cout<<cnt<<endl;
		
	}
	
	return 0; 
}
