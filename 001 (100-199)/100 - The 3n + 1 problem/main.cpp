#include <iostream>
using namespace std;
int main(){
    int a, b;
    while(cin >> a >> b){
        cout << a << " " << b << " " ;
        if(a>b){a=a+b; b=a-b; a=a-b;}
        
    }
    return 0;
}
