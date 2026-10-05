#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int arr[11][21];
int N;
int M;
int solve(int a, int b){
    int result;
    for(int i =0; i<N; i++){
        if(arr[a][i]==b){
            result=i;
            break;
        }
        else{}
    }
    return result;
}
int resolve(int i, int j){
    int result;
    for(int k=0;k<M-1;k++){
        if((solve(k,i)-solve(k,j)<0 && solve(k+1,i)-solve(k+1,j)<0 )|| (solve(k,i)-solve(k,j)>0 && solve(k+1,i)-solve(k+1,j)>0)){
            if(k==M-2){
                result=1;
            }
            else{}
        }
        else{
            result=0;
            break;
        }
    }
    return result;
}
int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int r=0;
    cin>>M>>N;
    for (int i= 0;i<M;i++){
        for(int j=0; j<N; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 1; i<=N;i++){
        for(int j = i+1; j<=N;j++){
            if(i==j){}
            else{
                r=r+resolve(i,j);
            }
        }
    }
    cout<<r;
    return 0;
}