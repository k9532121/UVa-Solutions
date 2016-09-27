#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    char c;
    int num=0;
    while((c = cin.get()) != EOF){
        if(c=='\"')
            if(num==0){
                cout << "``";
                num++;
            }else{
                cout << "\'\'";
                num=0;
            }
        else
            cout << c;
    }
    return 0;
}
