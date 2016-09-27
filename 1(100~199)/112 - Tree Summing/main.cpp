#include <iostream>
#include <cctype>
#include <stack>
using namespace std;
int main(){
    int n, all, check, tmp, ans, left, buttom, right, num;
    char tmp1, tmp2, minus;
    while(cin >> n){
        stack<int> stk;
        check = 1;
        tmp = 0;
        ans = 0;
        all = 0;
        left = 0;
        minus = 0;
        buttom = 0;
        num = 0;
        while(check==1 || check==2){
            do
                cin >> tmp1;
            while(!(tmp1=='(' || tmp1==')' || isdigit(tmp1) || tmp1=='-'));
            if(tmp1=='('){
                left = 1;
                if(num == 1){
                    if(minus==1) {tmp=tmp*(-1);}
                    stk.push(tmp);
                    all += stk.top();
                    tmp = 0;
                    minus = 0;
                    num = 0;
                }
            }else if(tmp1==')'){
                if(left == 0){
                    all -= stk.top();
                    stk.pop();
                    if(stk.empty())
                        check = 0;
                    buttom = 0;
                }else{
                    buttom ++;
                    if(buttom == 2){
                        if(all == n) ans = 1;
                        buttom = 0;
                    }
                    if(stk.empty())
                        check = 0;
                }
                num = 0;
                left = 0;
            }else if(tmp1=='-'){
                minus = 1;
                buttom = 0;
                num = 1;
                cin >> tmp;
            }else{
                left = 0;
                buttom = 0;
                tmp = tmp*10 + (int(tmp1)-int('0'));
                num = 1;
            }
        }
        cout << ((ans==1)?"yes":"no") << endl;
    }
    return 0;
}
