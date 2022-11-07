#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

long long w[110000];
long long v[110000];
long long dp[110][110000];

//max関数は自作してもよいが、#include<algorithm>に入っている


int main(){
int n,W; cin>>n>>W;
for(int i=1;i<=n;i++){
  cin>>w[i]>>v[i];
}

for(int i=0;i<=W;i++) dp[0][i]=0;

for(int i=1;i<=n;i++){
  for(int j=1;j<=W;j++){
    if(j<=w[i]){
      dp[i][j]=dp[i-1][j];
    }
    if(j>=w[i]){
    long long dp1=dp[i-1][j-w[i]]+v[i];
    long long dp2=dp[i-1][j];
    dp1=max(dp1,dp2);
    dp[i][j]=max(dp[i][j],dp1);
    }
  }
}

cout<<dp[n][W]<<endl;




}