#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int X[1510][1510];
int Y[1510][1510];

int main(){
    int H,W; cin>>H>>W;
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin>>X[i][j];
        }
    }

    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            //このやり方ではY[i][j-1]で読み込むi行目は固定する
            Y[i][j]=X[i][j]+Y[i][j-1];
        }
    }

    int Q; cin>>Q;
    int sum=0;
    for(int i=0;i<Q;i++){
        int a; cin>>a;
        int b; cin>>b;
        int c; cin>>c;
        int d; cin>>d;
        for(int k=a;k<=c;k++){
            sum=sum+Y[k][d]-Y[k][b-1];
        }
        cout<<sum<<endl;
        sum=0;
    }


}

//26min 4s
//sum=sum+Y[k][d]-Y[k][d-1];で手間取ったd-1→b-1と変えてACした。