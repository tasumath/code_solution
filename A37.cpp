#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//要素数の見落としでREになってた
long long a[210000];
long long c[210000];

int main(){
    long long n,m,b;
    cin>>n;
    cin>>m;
    cin>>b;

    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>c[i];

    long long a_sum=0;
    long long b_sum=0;
    long long c_sum=0;

    for(int i=1;i<=n;i++) a_sum = a[i]*m + a_sum;
    for(int i=1;i<=m;i++) c_sum = c[i]*n + c_sum;

    b_sum = b*m*n;

    //cout<<a_sum<<b_sum<<c_sum<<endl;

    long long Answer = a_sum + b_sum + c_sum;

    cout<<Answer<<endl;


}

