#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;
int main(){
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int N;
    cin>> N;
    string array[100][2];
    for (int i = 0; i< N; i++){
        cin>>array[i][0]>>array[i][1];
    } 
    int arr[26][3];
    for (int i=0; i< N; i++){
        for(int j=0; j< array[i][0].length(); j++){
           if (array[i][0][j] == 'a'){
            arr[0][0]++;
           }
           else if (array[i][0][j] == 'b'){
            arr[1][0]++;
           }
           else if (array[i][0][j] == 'c'){
            arr[2][0]++;
           }
           else if (array[i][0][j] == 'd'){
            arr[3][0]++;
           }
           else if (array[i][0][j] == 'e'){
            arr[4][0]++;
           }
           else if (array[i][0][j] == 'f'){
            arr[5][0]++;
           }
           else if (array[i][0][j] == 'g'){
            arr[6][0]++;
           }
           else if (array[i][0][j] == 'h'){
            arr[7][0]++;
           }
           else if (array[i][0][j] == 'i'){
            arr[8][0]++;
           }
           else if (array[i][0][j] == 'j'){
            arr[9][0]++;
           }
           else if (array[i][0][j] == 'k'){
            arr[10][0]++;
           }
           else if (array[i][0][j] == 'l'){
            arr[11][0]++;
           }
           else if (array[i][0][j] == 'm'){
            arr[12][0]++;
           }
           else if (array[i][0][j] == 'n'){
            arr[13][0]++;
           }
           else if (array[i][0][j] == 'o'){
            arr[14][0]++;
           }
           else if (array[i][0][j] == 'p'){
            arr[15][0]++;
           }
           else if (array[i][0][j] == 'q'){
            arr[16][0]++;
           }
           else if (array[i][0][j] == 'r'){
            arr[17][0]++;
           }
           else if (array[i][0][j] == 's'){
            arr[18][0]++;
           }
           else if (array[i][0][j] == 't'){
            arr[19][0]++;
           }
           else if (array[i][0][j] == 'u'){
            arr[20][0]++;
           }
           else if (array[i][0][j] == 'v'){
            arr[21][0]++;
           }
           else if (array[i][0][j] == 'w'){
            arr[22][0]++;
           }
           else if (array[i][0][j] == 'x'){
            arr[23][0]++;
           }
           else if (array[i][0][j] == 'y'){
            arr[24][0]++;
           }
           else if (array[i][0][j] == 'z'){
            arr[25][0]++;
           }
           else {
            // do nothing here
           }
        }
        for(int j=0; j< array[i][1].length(); j++){
           if (array[i][1][j] == 'a'){
            arr[0][1]++;
           }
           else if (array[i][1][j] == 'b'){
            arr[1][1]++;
           }
           else if (array[i][1][j] == 'c'){
            arr[2][1]++;
           }
           else if (array[i][1][j] == 'd'){
            arr[3][1]++;
           }
           else if (array[i][1][j] == 'e'){
            arr[4][1]++;
           }
           else if (array[i][1][j] == 'f'){
            arr[5][1]++;
           }
           else if (array[i][1][j] == 'g'){
            arr[6][1]++;
           }
           else if (array[i][1][j] == 'h'){
            arr[7][1]++;
           }
           else if (array[i][1][j] == 'i'){
            arr[8][1]++;
           }
           else if (array[i][1][j] == 'j'){
            arr[9][1]++;
           }
           else if (array[i][1][j] == 'k'){
            arr[10][1]++;
           }
           else if (array[i][1][j] == 'l'){
            arr[11][1]++;
           }
           else if (array[i][1][j] == 'm'){
            arr[12][1]++;
           }
           else if (array[i][1][j] == 'n'){
            arr[13][1]++;
           }
           else if (array[i][1][j] == 'o'){
            arr[14][1]++;
           }
           else if (array[i][1][j] == 'p'){
            arr[15][1]++;
           }
           else if (array[i][1][j] == 'q'){
            arr[16][1]++;
           }
           else if (array[i][1][j] == 'r'){
            arr[17][1]++;
           }
           else if (array[i][1][j] == 's'){
            arr[18][1]++;
           }
           else if (array[i][1][j] == 't'){
            arr[19][1]++;
           }
           else if (array[i][1][j] == 'u'){
            arr[20][1]++;
           }
           else if (array[i][1][j] == 'v'){
            arr[21][1]++;
           }
           else if (array[i][1][j] == 'w'){
            arr[22][1]++;
           }
           else if (array[i][1][j] == 'x'){
            arr[23][1]++;
           }
           else if (array[i][1][j] == 'y'){
            arr[24][1]++;
           }
           else if (array[i][1][j] == 'z'){
            arr[25][1]++;
           }
           else {
            // do nothing here
           }
        }   
        for(int j=0; j<26; j++){
            if(arr[j][0]>= arr[j][1]){
                arr[j][2]+= arr[j][0];
                arr[j][0]=arr[j][1]=0;
            }
            else{
                arr[j][2]+=arr[j][1];
            arr[j][0]=arr[j][1]=0;
            }
        }
        
    }
    for(int k=0; k<26; k++){
        cout<<arr[k][2]<<endl;
    }
return 0;
}     