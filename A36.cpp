#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int main(){

  int n,k; cin>>n>>k;

  n = n*2 - 2;

  if(n<=k && k%2==0) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

}
