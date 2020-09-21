#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(!n)break;
		vector <string> comb;
		for(int i=0;i<n;i++){
			int arr[5]={};
			for(int i=0;i<5;i++){
				cin>>arr[i];
			}
			sort(arr,arr+5);
			string course="";
			for(int i=0;i<5;i++){
				ostringstream ss;
				ss<<arr[i];
				string s=ss.str();
				course+=s;
				course+=" ";
			}
//			cout<<"STIRNG: " <<course<<endl;
			comb.push_back(course);
		}
		
		int max=0;
		for(int i=0;i<comb.size();i++){
			int cnt=1;
			for(int j=0;j<comb.size();j++){
				if(i==j)continue;
				if(comb[i]==comb[j])cnt++;
			}
			if(max<cnt)max=cnt;
		}
		if(max==1)cout<<n<<endl;
		else cout<<max<<endl;
	}
	
	
	return 0;
}
