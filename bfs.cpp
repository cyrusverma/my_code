#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
void bfsOfGraph(int V, vector<int> adj[]) {
     
       vector<int>visited(V,0);
        queue<int>q;
       // vector<int>vec;
        q.push(V);
        visited[V]=1;
       
        while(!q.empty()){
            int current=q.front();
            q.pop();
             vec.push_back(current);
            for(auto child:adj[current]){
                if(!visited[child]){
                    q.push(child);
                    visited[child]=1;
                   // vec.push_back(child);
                    
                }
            }
        }
       //return vec;
       for(int i=0;i<4;i++){
        cout<<vec[i]<<" ";
    }
    }
int main(){
    vector<int>adj[4];
    for(int  i=0;i<4;i++){
        int  x,y;cin>>x>>y;
        adj[x].push_back(y);


    }
    bfsOfGraph(0,adj);
   // bfsOfGraph(0,adj);
    


}