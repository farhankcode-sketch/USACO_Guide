#include <iostream>
#include<cmath>
using namespace std;
int n;
int arr[5000][2];
int value(int i, int j){
    int result;
    result=((arr[i][0]-arr[j][0])*(arr[i][0]-arr[j][0]))+((arr[i][1]-arr[j][1])*(arr[i][1]-arr[j][1]));
    return result;
}
int main() {
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i][0];
    }
    for(int i = 0; i<n; i++){
        cin>>arr[i][1];
    }
    int r=0;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(r<=value(i,j)){
                r=value(i,j);
            }
            else{}
        }
    }
    cout<<r;
    return 0;
}