#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(!n)break;
		int arr[1000]={};
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int flag=0;
		for(int i=n-1;i>=0;i--){
			int sum=arr[i];
			for(int j=0;j<n;j++){
				if(flag)break;
				if(j==i)continue;
				for(int k=j+1;k<n;k++){
					if(flag)break;
					if(i==k)continue;
					for(int l=k+1;l<n;l++){
						if(flag)break;
						if(l==i)continue;
//						cout<<sum<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<" "<<arr[j]+arr[k]+arr[l]<<endl;
						if(sum==arr[j]+arr[k]+arr[l]){
//							cout<<"MASUK "<<endl;
							flag=1;
							break;
						}
					}
				}
			}
			if(flag){
				cout<<sum<<endl;
				break;
			}
		}
		if(!flag)cout<<"no solution"<<endl;
	}
	return 0;
}
