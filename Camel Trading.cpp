#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int loop;
	cin>>loop;
	cin.ignore();
	while(loop--){
		int min[12]={};
		int max[12]={};
		for(int i=0;i<12;i++){
			min[i]=0;
			max[i]=1;
		}
		vector <char> op;
		vector <int> number;
		string s;
		getline(cin,s);
		int cnt=0;
		for(int i=0;i<s.length();i++){
			if(s[i]>='0' && s[i]<='9'){
				int num=s[i]-'0';
				if(s[i+1]>='0' && s[i+1]<='9'){
					num=(num*10)+s[i+1]-'0';
					i++;
				}
				number.push_back(num);
				cnt++;
			}
			else op.push_back(s[i]);
		}
		
		for(int i=0;i<number.size();i++){
			max[i]=number[i];
			min[i]=number[i];
//			cout<<number[i]<<" ";
		}
//		cout<<endl;
		
		for(int i=0;i<op.size();i++){
			if(op[i]=='+'){
				max[i+1]=max[i]+max[i+1];
				max[i]=1;
			}
			else{
				min[i+1]=min[i]*min[i+1];
				min[i]=0;
			}
		}
		long long maxres=1;
		long long minres=0;
		for(int i=0;i<12;i++){
			maxres*=max[i];
			minres+=min[i];
		}
		cout<<"The maximum and minimum are "<<maxres<<" and "<<minres<<"."<<endl;
		
	}
	return 0;
}
