#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
#include<set>
#include<queue>
using namespace std;
int main(){
    int n; cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
      cin>>s[i];
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
      cout<<s[i]<<endl;
    }

}