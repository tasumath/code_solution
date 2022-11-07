#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int main(){
    int N; cin>>N;
    int K; cin>>K;

    int cnt=0;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
           if((K-(i+j))<=N && K-(i+j)>0) cnt++;
    }
}

cout<<cnt<<endl;

}

//7min 49s
//if文の条件を絞れつのに苦戦した