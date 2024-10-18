#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int i,j,n,m;
	cin>>n>>m;
	set<int> row,col;
	for(int i=0;i<m;i++){
		  cin>>i>>j;
		  row.insert(i);
		  col.insert(j);
		  cout<<(n-row.size())*(n-col.size());
	}	
	
	
	
	return 0;
}
