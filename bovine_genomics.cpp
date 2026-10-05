#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool value[4][2];
int N;
int M; 
string arr[200];
int solve(int i){
    bool value[4][2] = {false};
    int result=0;
    for(int j=0;j<2*N;j++){
        if(j<N){
            if(arr[j][i]=='A'){
                value[0][0]=true;
            }
            else if(arr[j][i]=='C'){
                value[1][0]=true;
            }
            else if(arr[j][i]=='G'){
                value[2][0]=true;
            }
            else if(arr[j][i]=='T'){
                value[3][0]=true;
            }
        }
        else{
            if(arr[j][i]=='A'){
                value[0][1]=true;
            }
            else if(arr[j][i]=='C'){
                value[1][1]=true;
            }
            else if(arr[j][i]=='G'){
                value[2][1]=true;
            }
            else if(arr[j][i]=='T'){
                value[3][1]=true;
            }
        }
    }
    for(int j=0;j<4;j++){
        if((value[j][0]!=value[j][1])||value[j][0]==false){
            if(j==3){
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
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);  
    int r=0;
    cin>>N>>M;
    for(int i=0;i<2*N;i++){
        cin>>arr[i];
    }
    for(int i=0; i<M;i++){
        r = r + solve(i);
    }
    cout<<r;
    return 0;
}