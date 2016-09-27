#include <iostream>
using namespace std;
int main(){
    long long int a, b;
    int i, j=0;   //i為盈利月,j為虧損月
    while(cin >> a >> b){
        for(i = 4; i > 0; --i)
            if(i*a < b*(5-i)) break;
        if(i==0){
            cout << "Deficit" << endl;
        }else{
            j=5-i;
            if(j>3)
                j=j*2+1;
            else
                j*=2;
            i=12-j;
            if((i*a-j*b) >= 0)
                cout << i*a-j*b << endl;
            else
                cout << "Deficit" << endl;
        }
    }
    return 0;
}
