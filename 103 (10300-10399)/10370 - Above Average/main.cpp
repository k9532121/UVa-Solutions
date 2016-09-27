#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, m, i;
    double ave, m2;
    cin >> n;
    cout << fixed << setprecision(3);
    while(n-- > 0){
        cin >> m;
        int scores[m];
        ave = 0;
        m2 = 0;
        for(i=0;i<m;i++){
            cin >> scores[i];
            ave += scores[i];
        }
        ave/=m;
        for(i=0;i<m;i++)
            if(ave<scores[i])
                m2++;
        cout << m2/m*100.0 << "%" << endl;
    }
    return 0;
}
