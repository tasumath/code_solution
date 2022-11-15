#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
#include<queue>
using namespace std;

int q;
int querytype[100009];

int main(){
    cin>>q;
    priority_queue<int,vector<int>,greater<int>> s;
    for(int i=1;i<=q;i++){
        cin>>querytype[i];

        if(querytype[i]==1){
            int t;
            cin>>t;
            s.push(t);
        }
        if(querytype[i]==2){
            int answer = s.top();
            cout<<answer<<endl;
        }
        if(querytype[i]==3) s.pop();
    }


}