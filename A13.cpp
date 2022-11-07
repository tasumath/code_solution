#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

long long a[110000];
int n;
long long k;

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];

    long long cnt=0;
    //if(n%2==1) n=n+1;

    for(int i=1;i<n;i++){

    long long left=i;
    //範囲の取り方が大事。leftの値が右端の値になる条件のときに正しい値を
    //得るには、rightを広げておく必要がある。
    long long right=n+1;

    while(right-left>1){
        long long mid = (right+left)/2;
        //cout<<"mid"<<mid<<endl;

        //配列aはlong long で宣言すること。
        //絶対値の計算で？オーバーフローするよ
        if(abs(a[mid]-a[i])<k) left=mid;
        if(abs(a[mid]-a[i])==k) left=mid;
        if(abs(a[mid]-a[i])>k) right=mid;
    }
   
    //cout<<"right"<<i<<":"<<right<<endl;

    cnt=cnt+abs(left-i);
    //cout<<"cnt"<<cnt<<endl;
    }

    cout<<cnt<<endl;

}
