#include <iostream>
using namespace std;
int main(){
    int n, a, b, i, j, k;
    cin >> n;
    while(n-- > 0){
        cin >> a >> b;
        for(i=0;i<b;i++){
            for(j=0;j<a;j++){
                for(k=0;k<j+1;k++)
                    cout << j+1;
                cout << endl;
            }
            for(j=a-2;j>=0;j--){
                for(k=0;k<j+1;k++)
                    cout << j+1;
                cout << endl;
            }
            if(!(i==b-1 && n==0))cout << endl;
        }
    }
    return 0;
}
