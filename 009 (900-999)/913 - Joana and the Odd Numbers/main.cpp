#include <iostream>
using namespace std;
int main(){
    long long int n, i, num, ans;
    while(cin >> n){
        ans = 0;
        num = (n+1) * ((n+1)/2);
        n = 3;
        for(i = num-1; n-- > 0; i-=2){
            if(i<1) break;
            ans += i;
        }
        cout << ans << endl;
    }
    return 0;
}
