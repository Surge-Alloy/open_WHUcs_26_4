#include <bits/stdc++.h>
using namespace std;

void repChar(char c, int n) {
    for(int i=0;i<n;i++) cout<<c;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        char c;
        int h, w;
        cin>>c>>h>>w;
        if(c=='a') {
            for(int j=1;j<=h;j++) {
                repChar(' ', h-j);
                repChar('*', 2*j-1);
                cout<<endl;
            }
        } else if(c=='b') {
            for(int j=1;j<=h;j++) {
                repChar('*', w);
                cout<<endl;
            }
        } else if(c=='c') {
            for(int j=1;j<=h;j++) {
                repChar(' ', h-j);
                repChar('*', w);
                cout<<endl;
            }
        }
    }
    return 0;
}


