#include <iostream>
using namespace std;
int main(){
    string con;
    int k=7, len, i;
    while(getline(cin, con)){
        len = con.length();
        for(i=0;i<len;i++)
            cout << char(int(con[i])-k);
        cout << endl;
    }
    return 0;
}
