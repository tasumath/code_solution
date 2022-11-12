#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
#include<queue>
using namespace std;

int main(){
  int Q; cin>>Q;
  queue<string> q;
  for(int i=1;i<=Q;i++){
    int x; cin>>x;
    if(x==1){
      string s;
      cin>>s;
      q.push(s);
    }
    if(x==2){
      string ans = q.front();
      cout<<ans<<endl;
    }
    if(x==3){
      q.pop();
    }
  }

}
