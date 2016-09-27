#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
struct four_float{
    int nme;
    float x1, x2, y1, y2, r;
};
int main(){
    vector<four_float> rec;
    four_float tmp;
    char c;
    int check, i, num=1;
    float x, y;
    while(cin >> c){
        if(c=='*') break;
        if(c=='r'){
            tmp.nme = c;
            cin >> tmp.x1 >> tmp.y1 >> tmp.x2 >> tmp.y2;
        }
        rec.push_back(tmp);
    }
    while(cin >> x >> y){
        if(fabs(x-9999.9)<0.1 && fabs(y-9999.9)<0.1) break;
        check = 0;
        for(i=0;i<rec.size();i++){
            if(rec[i].x1 < x && rec[i].x2 > x && rec[i].y1 > y && rec[i].y2 < y){
                cout << "Point " << num << " is contained in figure " << i+1 << endl;
                check = 1;
            }
        }
        if(!check)
            cout << "Point " << num << " is not contained in any figure" << endl;
        num++;
    }
    return 0;
}
