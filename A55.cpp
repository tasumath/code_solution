#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
#include<queue>
#include<map>
#include<set>
using namespace std;

int q;
int querytype[100009];

int main(){
    cin>>q;
    set<int> s;
    for(int i=1;i<=q;i++){
        cin>>querytype[i];

        if(querytype[i]==1){
            int t; cin>>t;
            s.insert(t);
        }
        if(querytype[i]==2){
            int r; cin>>r;
            s.erase(r);
        }
        if(querytype[i]==3){
          int x; cin>>x;
          auto itr = s.lower_bound(x);
          if(itr==s.end()){
            cout<<-1<<endl;
          }
          else{
            cout<<(*itr)<<endl;
          }
        } 
    }

}