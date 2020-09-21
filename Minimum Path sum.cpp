#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000][1000]={};
int ans[1000][1000]={};
int main(){
	int loop;
	cin>>loop;
	while(loop--){
		int r, c;
		cin>>r>>c;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>arr[i][j];
				ans[i][j]=0;
			}
		}
		
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i==0 && j==0){
					ans[i][j]=arr[i][j];
				}
				else ans[i][j] = min((i==0) ? 9999:ans[i-1][j], (j==0)? 99999:ans[i][j-1])+arr[i][j];
			}
		}
		cout<<ans[r-1][c-1]<<endl;
	}
	
	return 0;
}
