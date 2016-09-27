#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, tmp;
    while(cin >> a >> b){
        if(a==-1 && b==-1) break;
        cout << (((max(a,b)-min(a,b)) < (100+min(a,b)-max(a,b)))?max(a,b)-min(a,b):100+min(a,b)-max(a,b)) << endl;
    }
    return 0;
}
