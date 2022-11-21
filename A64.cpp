#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
#include<queue>
#include<map>
#include<set>
using namespace std;

int n,m;
int a[100009],b[100009],c[100009];
vector<pair<int,int>> G[100009];
int cur[100009];
bool kakutei[100009];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;
vector<int> ans[100009];


int main(){
  cin>>n>>m;
  for(int i=1;i<=m;i++){
    cin>>a[i]>>b[i]>>c[i];
    G[a[i]].push_back(make_pair(b[i],c[i]));
    G[b[i]].push_back(make_pair(a[i],c[i]));
  }

  for(int i=1;i<=n;i++) kakutei[i]=false;
  for(int i=1;i<=n;i++) cur[i] = 2000000000;

  //ans.push_back(1);

  cur[1]=0;
  Q.push(make_pair(cur[1],1));

  while(!Q.empty()){
    int pos = Q.top().second;
    Q.pop();
    if(kakutei[pos]==true) continue;
    kakutei[pos]= true;
    for(int i=0;i<G[pos].size();i++){
      int nex=G[pos][i].first;
      int cost=G[pos][i].second;
      if(cur[nex]>cur[pos]+cost){
        cur[nex]=cur[pos]+cost;
        Q.push(make_pair(cur[nex],nex));
      }
    }
  }

  for(int i=1;i<=n;i++){
    if(cur[i]==2000000000) cout<<-1<<endl;
    else cout<<cur[i]<<endl;
  }


}