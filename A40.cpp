#include <bits/stdc++.h>
using namespace std;

int a[210000];
//cntの型宣言はlong long でないといけない。なぜ？？？
long long cnt[110];

int main(){

  int n; cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];

  for(int i=1;i<=100;i++) cnt[i]=0;

  for(int i=1;i<=n;i++) cnt[a[i]]=cnt[a[i]]+1;
  
  long long  answer=0;
  //制約が 1<=a[i]<=100である。よって、ループも100まで取ること
  for(int i=1;i<=100;i++){
    answer = answer + ((cnt[i])*(cnt[i]-1)*(cnt[i]-2))/6;
  }

  cout<<answer<<endl;

}
