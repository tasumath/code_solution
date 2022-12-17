#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int x = a.size();
    int y = b.size();
    int cnt = 0;
    if(x>y){
        cout<<"GREATER"<<endl;
        cnt++;
    }
    else if(x<y){
        cout<<"LESS"<<endl;
        cnt++;
    }
    if(x==y && cnt==0){
        for(int i=0;i<x;i++){
            int n = a[i] - '0';
            int m = b[i] - '0';
            if(n>m && cnt==0){
                cout<<"GREATER"<<endl;
                cnt++;
            }
            else if(n<m && cnt==0){
                cout<<"LESS"<<endl;
                cnt++;
            }
        }
    }
    if(cnt==0) cout<<"EQUAL"<<endl;
}