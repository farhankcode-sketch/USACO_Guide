#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
int t;//total number of cows
char array[50];//assign their direction
long long arr[50][2];//also say their coordinates 
cin>>t;//put their values
for(int j = 0; j<t; j++){
    cin>>array[j]>>arr[j][0]>>arr[j][1];
}
int t1=count(array, array+t , 'E');/*see number of times'E' occurs so
that the while loop occurs exctly number of times it is required. */

int i = 0;//tracks the while loop so it runs desired no. of times
long long r1=1000000000;//tracks j-th lowest possible y-axis for 'E'
long long r2=-1;//write the appropiate i for which r1 is j-th lowest
long long r3=-1;//helps us finding jth lowest by adding additional constraints.
long long l1 = 1000000000;//these l-s are doing same thing for 'N's as r-s
long long l2,l3;
l2=l3=-1;
long long result[50];
fill(result, result + 50, -1);
bool Continue = true;//to continue the loop as per our own condition
if(0<t1){
    while(i<t1){
        for(int j = 0;j<t && Continue == true; j++){
            if(array[j]=='E'&&arr[j][1]>r3){
                if(arr[j][1]<=r1){
                    r1=arr[j][1];
                    r2=j;
                }else{}
            }
            else{}
        }
        r3 = r1;
        for(int j=0; j<t; j++){
            if(array[j]=='N'&& arr[j][0]>l3){
                if(arr[j][0]<=l1&& result[j]==-1){
                    l1=arr[j][0];
                    l2=j;
                }else{}
            }else{}
        }
        l3=l1;
        if(l2==-1){
            Continue = true;
            r1=1000000000;
            l1=1000000000;
            r2=-1;
            l2=-1;
            l3=-1;
            i++;
        }
        else{
            if(arr[l2][0]<=arr[r2][0]|| arr[l2][1]>=arr[r2][1]){
                l1=1000000000;
                l2=-1;
                Continue=false;
            }
            else{
                if(arr[l2][0]-arr[r2][0]<arr[r2][1]-arr[l2][1]){
                    result[l2]=arr[r2][1]-arr[l2][1];
                    Continue=false;
                    l1=1000000000;
                    l2=-1;
                }
                else if(arr[l2][0]-arr[r2][0]==arr[r2][1]-arr[l2][1]){
                    Continue=false;
                    l1=1000000000;
                    l2=-1;
                }
                else{
                    result[r2]=arr[l2][0]-arr[r2][0];
                    Continue=true;
                    r1=1000000000;
                    l1=1000000000;
                    r2=-1;
                    l2=-1;
                    l3=-1;
                    i++;
                }
            }
        }
    }
    for(int j=0; j<t; j++){
    if(result[j]==-1){
        cout<<"Infinity"<<endl;
    }
    else{
        cout<<result[j]<<endl;
    }
}
}
else{
    for(int j=0; j<t;j++){
        cout<<"Infinity"<<endl;
    }
}
return 0;
}