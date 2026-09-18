#include<iostream>
#include<cmath>

using namespace std;
int main(){
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w" , stdout);
    int c[3];
    int m[3];
    cin>>c[0]>>m[0]>>c[1]>>m[1]>>c[2]>>m[2];
    int r = 0;
    int i = r%3;
    for(int k= 0; k< 100; k++){
        if (m[i]<=c[(i+1)%3]-m[(i+1)%3]){
            m[(i+1)%3]= m[(i+1)%3]+m[i];
            m[i]=0;
            r++;
            i=r%3;
        }
        else{
           m[i]= m[i]-c[(i+1)%3]+m[(i+1)%3];
           m[(i+1)%3]=c[(i+1)%3];         
           r++;
            i=r%3;
        }
    }
    cout<<m[0]<<"\n"<<m[1]<<"\n"<<m[2];
    return 0;
}