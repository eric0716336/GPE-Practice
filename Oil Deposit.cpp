#include <iostream>
using namespace std;
int col,row;
char map[101][101];

void DFS(int x , int y){
	if(x<0 || y<0 || x>=row || y>=col)return;
	if(map[x][y]=='*')return;
	if(map[x][y]=='@')map[x][y]='*';
	
	DFS(x+1,y);
	DFS(x-1,y);
	DFS(x,y-1);
	DFS(x,y+1);
	DFS(x+1,y+1);
	DFS(x+1,y-1);
	DFS(x-1,y+1);
	DFS(x-1,y-1);
	
	return;
}

int main(){
	while(cin>>row>>col){
		if(!row && !col)break;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cin>>map[i][j];
			}
		}
		
		int count=0;
		for(int i =0;i<row;i++){
			for(int j=0;j<col;j++){
				if(map[i][j]=='@'){
					DFS(i,j);
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}
