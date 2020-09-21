#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		vector <int> data;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			data.push_back(k);
		}
		sort(data.begin(),data.end());
		int l=(n-1)/2,r,cnt=0;
		
		if(n%2==1)r=l;
		else r=l+1;
		
		for(int i=0;i<n;i++){
			if(data[i]>=data[l] && data[i]<=data[r])cnt++;
			if(data[i]>data[r])break;
		}
		cout<<data[l]<<" "<<cnt<<" "<<data[r]-data[l]+1<<endl;
		
	}
	return 0;
}
