#include <iostream>
using namespace std;
#include <vector>
int main(){
	int n;
	while(cin>>n)
	{
		if(!n)break;
		vector <int> num;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			num.push_back(k);
		}
		
		long long sum=0;
		long long max=0;
		for(int i=0;i<num.size();i++){
			sum+=num[i];
			if(max<sum)max=sum;
			if(sum<0)sum=0;
		}
		if(max)cout<<"The maximum winning streak is "<<max<<"."<<endl;
		else cout<<"Losing streak."<<endl;
	}
	return 0;
}
