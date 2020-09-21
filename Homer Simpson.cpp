#include <iostream>
//homer simpson
using namespace std;

int main(){
	int b1,b2,time;
	while(cin>>b1>>b2>>time){
		int bb1,bb2,beer;
		if(b1>b2){
			int temp=b1;
			b1=b2;
			b2=temp;
		}
		
		int best=time-(time/b1);
		int ans=0;
		int burger=0;
		for(int i=time/b1;i>=0;i--){
			bb2=(time-(i*b1))/b2;
			beer=time-(i*b1+bb2*b2);
			burger=i+bb2;
//			cout<<burger<<" "<<beer<<endl;
			if(beer==0){
				ans=burger;
//				cout<<"beer==0 >> "<<ans<<endl;
				break;
			}
			if(best>beer){
				ans=burger;
				best=beer;
			}
		}
		if(!beer)cout<<ans<<endl;
		else cout<<ans<<" "<<best<<endl;
	}
	return 0;
}
