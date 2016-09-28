#include <iostream>
using namespace std;
int main(){
    int n, avg, i, ans, num=1;
    while(cin >> n){
        if(n==0)break;
        cout << "Set #" << num++ << endl;
        int arr[n];
        avg=0, ans=0;
        for(i=0;i<n;i++){
            cin >> arr[i];
            avg += arr[i];
        }
        avg/=n;
        for(i=0;i<n;i++)
            if(arr[i]>avg)
                ans += (arr[i]-avg);
        cout << "The minimum number of moves is " << ans << ".\n\n";
    }
    return 0;
}
