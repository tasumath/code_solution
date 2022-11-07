#include <bits/stdc++.h>
using namespace std;

int a[110000];

int main(){
  int N; cin>>N;
  int x; cin>>x;

  for(int i=0;i<N;i++) cin>>a[i];

  int right=N-1;
  int left=0;
  while(right-left>1){
    int mid=(right+left)/2;
    if(a[mid]<x) left=mid;
    else right=mid; 
  }
  cout<<right+1<<endl;


}

//13min 34s
//0スタートが嫌な場合は、left=1にすればよい。書き直してみよう。