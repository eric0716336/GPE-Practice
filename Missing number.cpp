#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[65537];
int main(){
	int m,n;
	while(cin>>m>>n){
//		vector <int> ori;
		for(int j=0;j<n;j++){		
			int q;
			cin>>q;
			arr[q]++;
		}	
		m--;
		int cnt=1;
		while(m--){
			n--;
			for(int j=0;j<n;j++){
				int q;
				cin>>q;
				arr[q]++;
			}
			
			for(int j=0;j<65537;j++){
				if(cnt==arr[j])cout<<j<<endl;
			}	
			cnt++;
		}
	}
}
