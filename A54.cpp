#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
#include<queue>
#include<map>
using namespace std;

int q;
int querytype[100009];

int main(){
    cin>>q;
    map<string,int> Map;
    for(int i=1;i<=q;i++){
        cin>>querytype[i];

        if(querytype[i]==1){
            string t;
            cin>>t;
            int l; cin>>l;
            Map[t]=l;
        }
        if(querytype[i]==2){
            string ans;
            cin>>ans;
            cout<<Map[ans]<<endl;
        }
    }

}