#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
#include<queue>
using namespace std;

int a[100009];
int b[100009];
int dist[100009];

vector<int> G[100009];
vector<int> Q;

void dfs(int pos){
    dist[pos] = 0;

    for(int j=0;j<G[pos].size();j++){
        int to = G[pos][j];
        if(dist[to] != 0){
            dfs(to);
        }
    }
    return;
}


int main(){
    int n,m; cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>a[i]>>b[i];

    for(int i=1;i<=n;i++) dist[i] = -1;

    for(int i=1;i<=m;i++){
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }
    dfs(1);

    for(int i=1;i<=n;i++){
        if(dist[i]==-1){
            cout<<"The graph is not connected."<<endl;
        return 0;
    }
    }

    cout<<"The graph is connected."<<endl;

}