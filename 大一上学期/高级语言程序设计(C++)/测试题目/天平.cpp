#include <iostream>
#include <cmath>
using namespace std;

int a[600] = {0};
bool b[20002] = {0};

int main() {
    int n;
    cin >> n; 
    b[0] = 1;
    
    int max_sum = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        
        for(int j = max_sum; j >= 0; j--) {
            if(b[j]) {
                b[j + a[i]] = 1;
                b[abs(j - a[i])] = 1;
            }
        }
        
        max_sum += a[i]; 
    }
    int s = 0;
    for(int i = 1; i <= max_sum; i++) if(b[i]) s++;
    
    cout << s << endl;
    return 0;
}