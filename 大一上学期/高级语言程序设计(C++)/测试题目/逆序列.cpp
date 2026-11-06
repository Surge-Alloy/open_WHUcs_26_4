#include <iostream>
using namespace std;
#define ll long long

ll nifi(ll n) {
    ll m=0;
    while(n) {
        (m*=10)+=n%10;
        n/=10;
    }    
    return m;
}

int main() {
    ll n, m;
    cin >> n;
    m = nifi(n);
    if(!m%n) {
        cout<<n<<'*'<<m/n<<'='<<m<<endl;
        return 0;
    }
    cout<<n<<' '<<m;
    return 0;
}