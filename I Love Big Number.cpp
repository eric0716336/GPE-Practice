#include <iostream>
using namespace std;
int arr[1001][5001]={};
int main(){
	for(int i=0;i<1001;i++){
		for(int j=0;j<5001;j++)
		{
			arr[i][j]=0;	
		}
	}
	arr[0][0]=1;
	arr[1][0]=1;
	int max=0;
	for(int i=2;i<1001;i++){
		int last_digit=9;
		int j;
		for(int j=0;j<5001;j++){
			arr[i][j]+=(arr[i-1][j]*i);
			if(arr[i][j]>=10){
				arr[i][j+1]+=(arr[i][j]/10);
				arr[i][j]%=10;
			}
			
			last_digit=arr[i][j];
		}
	}
		
	int n;
	while(cin>>n){
		int sum=0;
		for(int i=0;i<5001;i++){
			sum+=arr[n][i];
		}
		cout<<sum<<endl;
	}
}

