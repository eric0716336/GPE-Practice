#include <iostream>
#include <vector>
using namespace std;
char map[21][21];
int visit[21][21];
int main(){
	int loop;
	int kas=1;
	cin>>loop;
	while(loop--){
		int ans[27]={};
		int H,W;
		cin>>H>>W;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cin>>map[i][j];
				visit[i][j]=0;
			}
		}
		vector <int> row;
		vector <int> col;
		int max=0;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(visit[i][j])continue;
				char current=map[i][j];
				if(!visit[i][j]){
					row.push_back(i);
					col.push_back(j);
					while(!row.empty()){
						int x=row[row.size()-1];
						int y=col[col.size()-1];
						row.pop_back();
						col.pop_back();
						visit[x][y]=1;
						if(x+1<H && map[x+1][y]==current && !visit[x+1][y]){
							row.push_back(x+1);
							col.push_back(y);
						}
						if(x-1>=0 && map[x-1][y]==current && !visit[x-1][y]){
							row.push_back(x-1);
							col.push_back(y);
						}
						if(y+1<W && map[x][y+1]==current && !visit[x][y+1]){
							row.push_back(x);
							col.push_back(y+1);
						}
						if(y-1>=0 && map[x][y-1]==current && !visit[x][y-1]){
							row.push_back(x);
							col.push_back(y-1);
						}
					}
				}
				ans[current-'a']++;
				if(max<ans[current-'a'])max=ans[current-'a'];
			}
		}
		
		cout<<"World #"<<kas++<<endl;
		for(int i=max;i>0;i--){
			for(int j=0;j<27;j++){
				if(ans[j]==i){
					cout<<char(j+'a')<<": "<<ans[j]<<endl;
				}
			}
		}
	}
	return 0;
}
