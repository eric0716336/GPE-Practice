#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
	int loop;
	cin>>loop;
	cin.ignore();
	while(loop--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		
		int k;
		long long sum=0;
		vector <int> sums(1,0);
		
		while(ss>>k){
			sum+=k;
			int size=sums.size();
			for(int i=0;i<size;i++){
				sums.push_back(sums[i]+k);
			}
		}
		
		if(sum%2==0 && find(sums.begin(),sums.end(),sum/2)!=sums.end()) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
