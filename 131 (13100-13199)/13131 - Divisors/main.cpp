#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t, n, k, i, ans;
    cin >> t;
    while(t-- > 0){
        cin >> n >> k;
        ans = 0;
        if(k==1) cout << 0 << endl;
        else{
            for(i=1; i<=sqrt(n); i++)
                if(n % i==0){
                    if(i % k!=0) ans+=i;
                    if(n/i != i && (n/i) % k!=0) ans+=n/i;
                }
            cout << ans << endl;
        }
    }
    return 0;
}
