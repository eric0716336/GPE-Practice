#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
char a[100][120] , b[100][120];
char buffa[10000],buffb[10000];
int N,M;
int AC(){
	if(N!=M)return 0;
	for(int i=0;i<N;i++){
		if(strcmp(a[i],b[i]))return 0;
	}

	return 1;
}

int PE(){
	int ida=0,idb=0;
	for(int i=0;i<N;i++){
		for(int j=0;a[i][j];j++){
			if(a[i][j]>='0' && a[i][j]<='9'){
				buffa[ida++]=a[i][j];
			}
		}
	}
	
	for(int i=0;i<M;i++){
		for(int j=0;b[i][j];j++){
			if(b[i][j]>='0' && b[i][j]<='9'){
				buffb[idb++]=b[i][j];
			}
		}
	}
	
	buffa[ida]='\0';
	buffb[idb]='\0';
	
	return !strcmp(buffa,buffb);
}

int judge(){
	if(AC())return 1;
	else if(PE())return 2;
	else return 3;
}

int main(){
	int kas=1;
	while(cin>>N){
		if(!N)break;
		cin.ignore();
		for(int i=0;i<N;i++){
			gets(a[i]);
		}
		cin>>M;
		cin.ignore();
		for(int i=0;i<M;i++){
			gets(b[i]);
		}
		int flag=judge();
		cout<<"Run #"<<kas++<<": ";
		if(flag==1)cout<<"Accepted"<<endl;
		else if(flag==2)cout<<"Presentation Error"<<endl;
		else cout<<"Wrong Answer"<<endl;
	}
}
