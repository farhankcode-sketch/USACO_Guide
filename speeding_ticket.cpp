#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int i, j, k1, k2, r; 
    i = j = k1 = k2 = r = 0; 

    int n, m;
    int N[100][2];
    int M[100][2];
    cin >> n >> m;
    for (int l = 0; l < n; l++){
        cin >> N[l][0] >> N[l][1];
    } 
    for (int l = 0; l < m; l++){
        cin >> M[l][0] >> M[l][1];
    } 
    while(i < n && j < m){
        if(N[i][0] - k1 < M[j][0] - k2) {
            if(r >= M[j][1] - N[i][1]){r = r;}
            else{r = M[j][1] - N[i][1];}
            k2 += N[i][0] - k1;
            i++;
            k1 = 0;
        }
        else if (N[i][0] - k1 == M[j][0] - k2){
            if(r >= M[j][1] - N[i][1]){r = r;}
            else{r = M[j][1] - N[i][1];}
            i++;
            j++;
            k1 = 0;
            k2 = 0;
        }
        else{
            if(r >= M[j][1] - N[i][1]){r = r;}
            else{r = M[j][1] - N[i][1];}
            k1 += M[j][0] - k2;
            j++;
            k2 = 0;
        }
    }
    cout << r << "\n";
    return 0;
}