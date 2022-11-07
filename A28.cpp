#include <bits/stdc++.h>
using namespace std;

char t[110000];
int a[110000];

int main(){

    int n; cin>>n;

    for(int i=1;i<=n;i++){
        cin>>t[i];
        cin>>a[i];
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        if(t[i]=='+') ans=ans+a[i];
        if(t[i]=='-') ans=ans-a[i];
        if(t[i]=='*') ans=ans*a[i];

        if(ans<0) ans=ans+10000;
        ans=ans%10000;
        cout<<ans<<endl;
    }
    
}