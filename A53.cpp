#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
#include<queue>
using namespace std;

int quetype[100009];
int x[100009];

//priority_queueは、q.top()で最大の値を取るのがデフォルトである。
//最小のものを取り出すときは、以下のように宣言すること
priority_queue<int,vector<int>,greater<int>> q;

int main(){
  int Q; cin>>Q;
  for(int i=1;i<=Q;i++){
    cin>>quetype[i];
    if(quetype[i] == 1) cin>>x[i];
  }

  for(int i=1;i<=Q;i++){
    if(quetype[i]==1) q.push(x[i]);
    if(quetype[i]==2) cout<<q.top()<<endl;
    if(quetype[i]==3) q.pop();
  }



}
