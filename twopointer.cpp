#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,5,6,7,8,16,35};
    int i=0,j=7;
    while(i<j){
        if(arr[i]+arr[j]==21){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        break;
        }
        if(arr[i]+arr[j]>21)j--;
        if(arr[i]+arr[j]<21)i++;
        
    }

}                                  