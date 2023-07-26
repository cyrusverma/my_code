
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    long long n;cin>>n;
	    for(long long i=1;i<=n;i++){
	        if(n<20){cout<<"0"<<endl;
	            break;
	        }
	        if((n-20*i)<20){
	            int a=n-20*i;
	            cout<<a<<endl;
	            break;
	        }
	        
	    }
	}
	return 0;
}
