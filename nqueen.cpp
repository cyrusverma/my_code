#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> solve(int col,vector<string>&board,vector<int>&left,vector<int>&updiog,vector<int>&lowdiog,int n){
    vector<vector<string>>ans;
    if(col==n){
        ans.push_back(board);
        return ans;
    }
    for(int row=0;row<n;row++){
        if(left[row]==0 && updiog[n-1+col-row]==0&& lowdiog[row+col]==0){ 
            board[col][row]='Q';
            left[row]=1;
            updiog[n-1+col-row]=1;
            lowdiog[row+col]=1;
            solve(col+1,board,left,updiog,lowdiog,n);
             board[col][row]='-';
            left[row]=0;
            updiog[n-1+col-row]=0;
            lowdiog[row+col]=0;
        }
    }

}
int main(){
    int n;cin>>n;
    string s(n,'-');
    vector<string>board(n);
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    vector<int>left(n,0),updiog(2*n-1,0),lowdiog(2*n-1,0);
     vector<vector<string>>A;
    A=solve(0,board,left,updiog,lowdiog,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }
   
    

}