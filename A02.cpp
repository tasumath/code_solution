#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
  int N,x; cin>>N>>x;
  int a[110];

  for(int i=0;i<N;i++) cin>>a[i];

  for(int i=0;i<N;i++){
    if(x==a[i]){
      cout<<"Yes"<<endl;
      return 0;
  }
  }
  cout<<"No"<<endl;


}
//2min 5s