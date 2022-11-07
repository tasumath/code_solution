#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int hw[1510][1510];

int main(){
    int h,w,n; cin>>h>>w>>n;

    for(int i=0;i<n;i++){
        int a; cin>>a;
        int b; cin>>b;
        int c; cin>>c;
        int d; cin>>d;
        for(int j=a;j<=c;j++){
        hw[j-1][b-1]=hw[j-1][b-1]+1;
        hw[j-1][d]=hw[j-1][d]-1;
        }
    }
    int sum=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            sum=hw[i][j]+sum;
            cout<<sum<<" ";
        }
        cout<<endl;
        sum=0;
    }

}

//20min 21s for(int j=a;j<=c;j++)の工夫が良い感じ。苦労せずに思いつけた。

