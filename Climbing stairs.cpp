#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int arr[101][101]={0};
	arr[0][0]=1;
	arr[1][0]=1;
	for(int i=2;i<101;i++){
		for(int j=0;j<101;j++){
			arr[i][j]+=arr[i-1][j]+arr[i-2][j];
			if(arr[i][j]>=1000){
				arr[i][j+1]+=(arr[i][j]/1000);
				arr[i][j]%=1000;
			}
		}
	}
	
	int n;
	while(cin>>n){
		int i;
		for(i=100;i>=0;i--){
			if(arr[n][i]!=0){
				cout<<arr[n][i--];
				break;
			}
		}
		while(i>=0){
			printf("%.3d",arr[n][i--]);
		}
		cout<<endl;
	}
}
