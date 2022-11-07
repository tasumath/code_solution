#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int a[110000];
int b[110000];
long long  dp[110000];

const long long INF=1LL<<60;

int min(int a,long long b){
  if(a>b) return b;
  else return a;
}



int main(){
int n; cin>>n;

for(int i=2;i<=n;i++) cin>>a[i];
for(int i=3;i<=n;i++) cin>>b[i];

for(int i=2;i<=n;i++){
  dp[i]=INF;
}

dp[1]=0;

for(int i=2;i<=n;i++){
  long long dp1 = dp[i-1] + a[i];
  long long  dp2 = dp[i-1] + b[i+1];

  dp[i] = min(dp1,dp[i]);
  dp[i+1] = min(dp2,dp[i+1]);

  //cout<<dp[i]<<endl;

}


int place=n;
int j = n;
vector<int> ans;

bool hantei=true;
while(hantei){
  if(dp[place]-dp[place-1]==a[place]){
    ans.push_back(place);
    place=place-1;
    if(place==1){
      ans.push_back(place);
      hantei=false;
      break;
    }
    continue;
  }

  if(dp[place]-dp[place-2]==b[place]){
    ans.push_back(place);
    place=place-2;
    if(place==1){
      ans.push_back(place);
      hantei=false;
      break;
    }
    continue;
  }
  //cout<<j<<endl;
  //cout<<place<<endl;

}

reverse(ans.begin(),ans.end());

cout<<ans.size()<<endl;
for(int i=0;i<ans.size();i++){
  if(i>=1) cout<<" ";
  cout<<ans[i];
}

cout<<endl;


}