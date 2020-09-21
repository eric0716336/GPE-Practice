#include <iostream>
#include <string>
using namespace std;
int LCS[1001][1001]={};

int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		for(int i=0;i<1001;i++){
			for(int j=0;j<1001;j++){
				LCS[i][j]=0;
			}
		}
		
		for(int i=1;i<=s1.length();i++){
			for(int j=1;j<=s2.length();j++){
				if(s1[i-1]==s2[j-1])LCS[i][j]=LCS[i-1][j-1]+1;
				else if(LCS[i-1][j]>LCS[i][j-1])LCS[i][j]=LCS[i-1][j];
				else LCS[i][j]=LCS[i][j-1];
			}
		}
		cout<<LCS[s1.length()][s2.length()]<<endl;
	}
}
