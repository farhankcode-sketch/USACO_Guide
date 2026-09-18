#include<iostream>
#include<cmath>

using namespace std;

int main(){
       freopen("shell.in", "r", stdin);
    freopen("shell.out", "w" , stdout);
    int N;
    cin>> N;
    int array[100][3];
    for(int i = 0; i < N; i++){
        cin >> array[i][0]>> array[i][1]>> array[i][2];
    }
    int A = 0;
    int B = 0;
    int C = 0;
    char array2[4];
    array2[1] = 'A';
    array2[2] = 'B';
    array2[3] = 'C';
     char array3[4];
    array3[1] = 'A';
    array3[2] = 'B';
    array3[3] = 'C';
    for(int i = 0; i < N; i++){
        array2[array[i][0]] = array3[array[i][1]];
        array2[array[i][1]] = array3[array[i][0]];
        array3[1] = array2[1];
        array3[2] = array2[2];
        array3[3] = array2[3];
     
     if(array2[array[i][2]] == 'A') {
        A++;
     } else if(array2[array[i][2]] == 'B'){
        B++;
     }else{
        C++;
     }
    }
    if (A >= B && A >= C){
        cout << A;
    }else if (B >= A && B >= C){
        cout << B;
    }else {
        cout << C;
    }
    return 0;
}