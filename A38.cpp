#include <bits/stdc++.h>
using namespace std;

int l[11000];
int r[11000];
int h[11000];
int ans[11000];

int main(){

  int d,n; cin>>d>>n;

  if(n==0){
    cout<<d*24<<endl;
    return 0;
  }

  for(int i=1;i<=n;i++){
    cin>>l[i]>>r[i]>>h[i];
  }

  bool hantei=true;

  for(int i=1;i<=d;i++) ans[i]=10000000;

    for(int i=1;i<=n;i++){
      int L = l[i];
      int R = r[i];
      for(int j=L;j<=R;j++){
        int H = h[i];
        if(H < ans[j]){
          ans[j]=H;
        }
      }
    }

  int sum=0;
  
  
  for(int i=1;i<=d;i++){
    sum=sum+ans[i];
    //cout<<i<<sum<<endl;
  }
  

  cout<<sum<<endl;



}