#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, num1, num2;
    cin >> n;
    string s;
    while(n-- > 0){
        cin >> s;
        num1 = 0; num2 = 0;
        num1 = (int(s[0])-int('A'))*26*26 + (int(s[1])-int('A'))*26 + (int(s[2])-int('A'))*1;
        num2 = (int(s[4])-int('0'))*1000 + (int(s[5])-int('0'))*100 + (int(s[6])-int('0'))*10 + (int(s[7])-int('0'))*1;
        cout << ((abs(num1-num2)<=100)?"nice":"not nice") << endl;
    }
    return 0;
}
