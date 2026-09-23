#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
   int N;
   cin>> N;
   int arr[300][2];
   string array[300];
   for(int i = 0; i< N; i++){
    cin>>arr[i][0]>>array[i]>>arr[i][1];
   }
   int day[101][3];
   fill(&day[0][0], &day[0][0] + (101*3), -1);
   day[0][0]=day[0][1]=day[0][2]=7;
   for(int i = 1; i <= 100; i++){
      for(int j=0; j<N; j++){
        if(arr[j][0]==i){
            if(array[j]=="Bessie"){
                day[i][0]=day[i-1][0]+arr[j][1]; 
            }
            else if(array[j]=="Elsie"){
                day[i][1]=day[i-1][1]+arr[j][1];
            }
            else{ day[i][2]=day[i-1][2]+arr[j][1]; j++;}
        }
        else{}
      }
      if (day[i][0]==-1 &&day[i][1]==-1 &&day[i][2]==-1 ){
        day[i][0]=day[i-1][0];
        day[i][1]=day[i-1][1];
        day[i][2]=day[i-1][2];
      }
      else if(day[i][1]==-1 &&day[i][2]==-1 ){
        day[i][1]=day[i-1][1];
        day[i][2]=day[i-1][2];
      }
      else if (day[i][1]==-1 &&day[i][0]==-1){
        day[i][1]=day[i-1][1];
        day[i][0]=day[i-1][0];
      }
      else if(day[i][0]==-1 &&day[i][2]==-1){
          day[i][0]=day[i-1][0];
          day[i][2]=day[i-1][2];
      }
      else if(day[i][0]==-1){
        day[i][0]=day[i-1][0];
      }
      else if(day[i][1]==-1){
        day[i][1]=day[i-1][1];
      }
      else if(day[i][2]==-1){
        day[i][2]=day[i-1][2];
      }
      else{}
    }
    int result = 0;
    for(int k = 0; k<100; k++){
        if(day[k][0]==day[k+1][0]&&day[k][1]==day[k+1][1]&&day[k][2]==day[k+1][2]){
           result= result;
        }
        else{
            if(day[k][0]==day[k][1] && day[k][1]==day[k][2]&& day[k+1][1]==day[k+1][2]&&day[k+1][2]==day[k+1][0]){
                result=result;
            }
            else if((day[k][0]==day[k][1] && day[k][1]> day[k][2] ) && (day[k+1][0]==day[k+1][1] && day[k+1][1]> day[k+1][2])){
                result=result;
            }
            else if((day[k][1]==day[k][2] && day[k][1]> day[k][0] ) && (day[k+1][2]==day[k+1][1] && day[k+1][1]> day[k+1][0])){
                result=result;
            }
            else if((day[k][0]==day[k][2] && day[k][2]> day[k][1] ) && (day[k+1][0]==day[k+1][2] && day[k+1][2]> day[k+1][1])){
                result=result;
            }
            else if((day[k][0]>day[k][1] && day[k][0]>day[k][2])&&(day[k+1][0]>day[k+1][1] && day[k+1][0]>day[k+1][2])){
                result=result;
            }
            else if((day[k][1]>day[k][0] && day[k][1]>day[k][2])&&(day[k+1][1]>day[k+1][0] && day[k+1][1]>day[k+1][2])){
                result=result;
            }
            else if((day[k][2]>day[k][1] && day[k][2]>day[k][0])&&(day[k+1][2]>day[k+1][1] && day[k+1][2]>day[k+1][0])){
            result=result;
            }
            else{result++;}

        }  
    }
    cout<<result;
   return 0;
}