#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
vector <int> ans;
int main(){
	long long s=0;
	ans.push_back(0);
	for(long long i=1;i<20;i++){
		int j=i;
		int in=i;
		while(j--){
			if(j==0)break;
			in*=i;
			in%=10;
//			cout<<"IN: "<<in<<endl;
		}
		s+=in;
		s%=10;
		ans.push_back(s);
	}
	
//	for(int i=0;i<20;i++){
//		cout<<i<<": "<<ans[i]<<endl;
//	}
	string str;
	while(cin>>str){
		if(str.length()==1 && str[0]=='0')break;
		int val=str[str.length()-1]-'0';
//		cout<<str.length()<<endl;
		if(str.length()>1){
			val=val+(str[str.length()-2]-'0')*10;
//			cout<<"str-2"<<str[str.length()-2]<<endl;
		}
//		cout<<"VAL: "<<val<<endl;
//		cout<<"ANS: ";
		cout<<(ans[val%20]+val/20*4)%10<<endl;
	}
	
}

