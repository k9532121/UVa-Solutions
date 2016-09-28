#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string s;
    char c;
    int len, i, ans, check;
    while(getline(cin, s)){
        len = s.length();
        ans = 0;
        check = 0;
        for(i=0;i<len;i++){
            c = s[i];
            if(isalpha(c)){
                if(!check){
                    check = 1;
                    ans ++;
                }
            }else
                check = 0;
        }

        cout << ans << endl;
    }
    return 0;
}
