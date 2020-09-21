#include <iostream>
using namespace std;

int main(){
	long long arr[51];
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<51;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	
	int n;
	while(cin>>n){
		if(!n)break;
		cout<<arr[n]<<endl;
	}
	return 0;
}
