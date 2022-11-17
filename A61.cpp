#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
#include<queue>
using namespace std;

int a[100009];
int b[100009];

vector<int> G[100009];

int main(){
    int n,m; cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>a[i]>>b[i];

    for(int i=1;i<=m;i++){
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }

    for(int i=1;i<=n;i++){
        cout<<i<<": {";
        for(int j=0;j<G[i].size();j++){
        if(j>=1) cout<<", ";
        cout<<G[i][j];
        }
        cout<<"}"<<endl;;
    }

}