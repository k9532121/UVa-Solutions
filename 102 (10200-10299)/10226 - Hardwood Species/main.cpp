#include <iostream>
#include <map>
#include <iomanip>
using namespace std;
int main(){
    string tmp;
    int t, n, num=0;
    cin >> t;
    getchar();
    getchar();
    cout << fixed << setprecision(4);
    while(t-- > 0){
        n = 0;
        map<string, int> m;
        map<string, int>::iterator i;
        while(getline(cin, tmp)){
            if(tmp.compare("")==0)break;
            if(m.find(tmp) != m.end())
                m[tmp]++;
            else
                m[tmp]=1;
            n++;
        }
        if(num)cout << endl;
        for(i = m.begin(); i != m.end(); i++)
            cout << i->first << " " << double(i->second)/n*100 <<endl;
        num=1;
    }
    return 0;
}
