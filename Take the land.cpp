#include <iostream>
using namespace std;

int main(){
	int m,n;
	while(cin>>m>>n){
		if(!n && !m)break;
		int map[101][101]={};
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>map[i][j];
			}
		}
		int length,width,tmp;
		int max=0;
		
		for(int i=0;i<m;i++){
			int sum[100]={};
			for(int j=i;j<m;j++){
				for(int k=0;k<n;k++){
					sum[k]+=!map[j][k];
					if(k==0 || tmp!=length*width){
						length=0;
						tmp=0;
					}
					length++;
					width= j-i+1;
					tmp+=sum[k];
					if(tmp==length*width && max<tmp){
						max=tmp;
					}
				}
			}
		}
		cout<<max<<endl;
	}
}
