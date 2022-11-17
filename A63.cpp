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
bool mark[100009];

vector<int> G[100009];
queue<int> Q;

void bfs(int pos){
    Q.push(pos);
    while(!Q.empty()){
        pos = Q.front();
        Q.pop();
    for(int j=0;j<G[pos].size();j++){
        int to = G[pos][j];
        if(dist[to] == -1){
            dist[to] = dist[pos] + 1;
            Q.push(to);
        }
    }
    }
    return;
}


int main(){
    int n,m; cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>a[i]>>b[i];

    for(int i=1;i<=n;i++) dist[i] = -1;

    for(int i=1;i<=n;i++) mark[i] = false;

    //for(int i=1;i<=n;i++) mark[i] = -1;


    for(int i=1;i<=m;i++){
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }

    //mark[1]=0;

    dist[1]=0;
    mark[1]=true;

    bfs(1);

    for(int i=1;i<=n;i++) cout<<dist[i]<<endl;

}