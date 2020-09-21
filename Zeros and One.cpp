#include <iostream>
using namespace std;
#include <string>

int main(){
	int kas=1;
	string s;
	while(cin>>s){
		int loop;
		cout<<"Case "<<kas++<<":"<<endl;
		cin>>loop;
		while(loop--){
			int a,b;
			cin>>a>>b;
			if(a>b){
				int temp=a;
				a=b;
				b=temp;
			}
			char curr=s[a];
			int flag=0;
//			cout<<"A: "<<a<<" B: "<<b<<endl;
			for(int i=a;i<=b;i++){
//				cout<<"CURR: "<<curr<<" "<<s[i]<<endl;
				if(curr!=s[i]){
					flag=1;
					break;
				}
			}
		
			if(flag)cout<<"No";
			else cout<<"Yes";
			cout<<endl;
			
		}
	}
}
