#include <iostream>
using namespace std;

int main(){
	long long N,L,R,l,r,ans;
	while(cin>>N>>L>>R){
		ans=0;
		for(long long i=31;i>=0;i--){
			long long q=(1LL<<i);
			if(N&q){
				r=ans+q;
				if(r<=L){
					ans+=q;
				}
			}
			else{
				l=ans+q;
				if(l<=R){
					ans+=q;
				}
			}
		}
		cout<<ans<<endl;
	}
}
