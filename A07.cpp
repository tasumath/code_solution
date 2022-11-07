#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int a[110000];

int main(){
    int D; cin>>D;
    int N; cin>>N;

    for(int i=0;i<N;i++){
        int l; cin>>l;
        int r; cin>>r;
        for(int j=l-1;j<r;j++){
            a[j]=a[j]+1;
        }
    }

    for(int i=0;i<D;i++) cout<<a[i]<<endl;



}