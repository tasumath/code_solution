#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

    long long n; cin>>n;

    long long a=n/3;
    long long b=n/5;
    long long c=n/15;
    cout<<a+b-c<<endl;

}

//包除原理を使っている。P(A)+P(B)-P(AかつB)