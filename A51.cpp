#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
using namespace std;

int main(){
  int Q; cin>>Q;
  stack<string> S;
  for(int i=1;i<=Q;i++){
    int x; cin>>x;
    
    if(x==1){
      string h; cin>>h;
      S.push(h);
    }
    if(x==2){
      string answer = S.top();
      cout<<answer<<endl;
   }
   if(x==3) S.pop();
  }



}