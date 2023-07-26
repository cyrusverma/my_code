// // #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;cin>>t;
// 	while(t--){
// // 	    int x,y,z;
// // 	    cin>>x>>y>>z;
// // 	    int t=min(x,y);int p;
// // 	    if(t==x){
// // 	        p=min(t,z);
// // 	        if(p==t)cout<<"NO"<<endl;
// // 	    }
// // 	    else
// // 	    {
// // 	        if((x-y >=2) || (x-z>=2))cout<<"YES"<<endl;
// // 	        else
// // 	        cout<<"NO"<<endl;
// // 	    }
// // 	}
// // 	return 0;
// // }
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;cin>>t;
// 	while(t--){
// 	    int x,y,z;
//         int t;
// 	    cin>>x>>y>>z;
//         if(y>z)
//         t=y-z;
//         else
//         t=z-y;
//         if(x>t)cout<<"YES"<<endl;
//         else 
//         cout<<"NO"<<endl;
	
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        v.push_back({x,y});

    }
   // vector<pair<int,int>> :: iterator it=v.begin();
  
  //auto it:v.begin();
for(auto it=v.begin();it!=v.end();++it){
    cout<<<it->first<<" "<<it->secon<<endl;
}

}