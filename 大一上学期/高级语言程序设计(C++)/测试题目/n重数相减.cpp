#include <iostream>
using namespace std;

int b[50000] = {0};
int bt=0, a, n;

void fminus(int m) {
    for(int i=0;i<n;i++) {
        if(i<m) b[i] -= a;
        if(b[i]<0) {
            b[i] += 10;
            b[i+1]--;
        }
    }
    while(!b[bt]) bt--;
}

int main() {
    cin>>a>>n; bt=n-1;
    for(int i=0;i<n;i++) b[i]=a;
    for(int i=n-1;i>=0;i--) fminus(i);
    for(int i=bt;i>=0;i--) cout<<b[i];
    return 0;
}