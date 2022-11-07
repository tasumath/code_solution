#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int dp[2100][2100];

int main(){

    string s;
    string t;
    cin>>s;
    cin>>t;

      for(int i=0;i<=s.size();i++){
        for(int j=0;j<=t.size();j++){
         dp[i][j]=0;
        }
    }


    for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
          dp[i+1][j+1]=dp[i][j+1];
          if(s[i]==t[j]){
            //cout<<i<<j<<endl;
            dp[i+1][j+1]=dp[i][j] + 1;
          }

          dp[i+1][j+1] = max(dp[i+1][j],dp[i+1][j+1]);
        }
    }

    int x=s.size();
    int y=t.size();

    //for(int i=0;i<=x;i++){
        //for(int j=0;j<=y;j++){
            //if(j>=1) cout<<" ";
            //cout<<dp[i][j];
        //}
        //cout<<endl;
    //}

    cout<<dp[x][y]<<endl;

}