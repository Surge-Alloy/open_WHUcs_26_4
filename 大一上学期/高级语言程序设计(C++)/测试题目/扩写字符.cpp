#include <iostream>
using namespace std;

int main() {
    char c='(', b=127;
    while(c!='\n') {
        c=getchar();
        if(c=='-') {
            c=getchar();
            if(c>b) {
                for(int i=b+1;i<=c;i++) cout<<(char)i;
                b=c;
            }
            else {
                cout<<'-'<<c;
                b=c;
            }
        }
        else {
            cout<<c;
            b=c;
        }
    }
    return 0;
}