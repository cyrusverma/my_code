#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;cin>>n;
    // vector<int>adj[n+1];
    // for(int i=0;i<n;i++){
    //     int u,v;cin>>u>>v;
    // }
//     priority_queue<int,vector<int>,greater<int>>pq;
//     pq.push(1);
//     pq.push(8);
//     pq.push(3);
//     pq.push(90);
//     pq.push(100);
//     pq.push(89);
//    while(!pq.empty()){
//        int x=pq.top();
//        cout<<x<<endl;
//         pq.pop();
//     }
cout<<"Enter the size of vector"<<endl;
int n;cin>>n;
vector<pair<int,int>>v(n);//={{1,2},{3,9},{8,90},{5,8}};
for(int i=0;i<n;i++){
   // cout<<v[i].first<<" "<< v[i].second<<endl;
   int x,y;
   
   cin>>x>>y;
  // v.push_back({x,y});
  v[i].first=x;v[i].second=y;
}
for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}

}