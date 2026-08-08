#include <iostream>
#include <cmath>

using namespace std; 

int main(){
    string basketball;
    cin>> basketball;
    int k;
    k = basketball.length();
    int A = 0;
    int B = 0;
    for (int i = 0; i < k; i+=2){
        if (basketball[i] == 'A'){
            if (basketball[i+1] == '1'){
                A = A +1 ;
            }else {
                A = A +2;
            }
        }
        else {
            if (basketball[i+1] == '1'){
                B = B +1 ;
            }else {
                B = B +2;
            }
        }
    }
    if (A > B){
        cout << 'A';
    } else { 
        cout << 'B';
    }
    return 0;
}