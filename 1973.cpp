#include <iostream>
#include <stdio.h>
#include<string.h>
using namespace std;

int main() {

long long int N, i, tot =0, num =0, aux=0, carneiros=0;

cin >> N;
long long int X[N], B[N];

for(i=0; i < N; i++) {
    cin >> X[i];
    tot+=X[i];
    B[i] = X[i];
}

while(i >= 0 and i < N) {

    if(X[i] == B[i]) { num++; }
    aux = X[i];

    if(X[i] > 0) { X[i] = X[i] - 1; carneiros++;}

    if(aux % 2 ==0) { i--; if(i < 0){break;} }
    else if(aux % 2!= 0) { i++; if(i == N){break;} }

}

cout << num << " " << tot - carneiros << endl;
return 0;
}
