#include<bits/stdc++.h>
using namespace std;
bool ispossible(int node,bool graph[100][100],int n,int color[],int prcolor){
    for(int i=0;i<n;i++){
        if(i!=node && graph[node][i]==1&& color[i]==prcolor )return false;
        return true;
    }
}
bool solve(int node,bool graph[100][100],int n,int cols,int color[] ){
    if(node==n)return true;
    for(int i=1;i<=cols;i++){
        if(ispossible(node,graph,n,color,i)){
            color[node]=i;
        }
        if(solve(node+1,graph,n,cols,color))return true;
        color[node]=0;
    }
    return false;
}
int main(){
    cout<<"Enter the no edge in your graph"<<endl;int m;cin>>m;cout<<"Enter the node in your graph"<<endl;
    int n;cin>>n;
    bool graph[n][n];
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    cout<<"Enter the  no of colors"<<endl;int cols;cin>>cols;
    int color[cols]={0};
    if(solve(0,graph,n,cols,color)){
        cout<<"Yes"<<endl;

    }
    else cout<<"NO"<<endl;

   

}