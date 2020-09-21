#include <iostream>
using namespace std;

int main(){
	int n;
	int kas=1;
	while(cin>>n){
		int arr[18]={};
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		long long max=0;
		for(int i=0;i<n;i++){
			long long pr=1;
			for(int j=i;j<n;j++){
				pr*=arr[j];
				if(max<pr)max=pr;
			}
		}
		cout<<"Case #"<<kas++<<": The maximum product is "<<max<<"."<<endl<<endl;
	}
}
