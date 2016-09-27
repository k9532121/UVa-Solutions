#include <iostream>
#include <queue>
using namespace std;
int BFS(int *maps, int x1, int y1, int x2, int y2){
    int i, j, num, ans, tmpx, tmpy, num_m, xm[] = {0,-1,-1,-1,0,1,1,1}, ym[] = {-1,-1,0,1,1,1,0,-1};
    pair<int, int> tmp1, tmps1;
    pair< pair<int, int>, int > tmp2, tmps2;
    queue< pair< pair<int, int>, int > > que;
    tmp1.first=x1,tmp1.second=y1;
    tmp2.first=tmp1,tmp2.second=0;
    que.push(tmp2);
    *(maps+(x1*8)+y1) = 1;
    num_m=0, ans=-1;
    while(!que.empty()){
        tmp2 = que.front();
        que.pop();
        tmp1 = tmp2.first;
        num = tmp2.second;
        num_m = 0;
        j = 0;
        while(1){
            tmpx = tmp1.first+xm[num_m]*j, tmpy = tmp1.second+ym[num_m]*j;
            if(!(tmpx >= 0 && tmpx < 8 && tmpy >=0 && tmpy < 8)) {num_m++, j=0; continue;}
            if(num_m==8) break;
            if(tmpx == x2 && tmpy == y2){ans = num + 1; break;}
            if(*(maps+(tmpx*8)+tmpy)==0){
                tmps1.first = tmpx, tmps1.second = tmpy;
                tmps2.first = tmps1, tmps2.second = num + 1;
                que.push(tmps2);
                *(maps+(tmpx*8)+tmpy)=1;
            }
            j++;
        }
        if(ans>-1)break;
    }
    return ans;
}
int main(){
    int x1, x2, y1, y2, i, j, ans;
    int maps[8][8];
    while(cin >> x1 >> y1 >> x2 >> y2){
        if(x1==0) break;
        x1--,x2--,y1--,y2--;
        for(i=0;i<8;i++)
            for(j=0;j<8;j++)
                maps[i][j]=0;
        if(x1==x2 && y1==y2)
            cout << 0 << endl;
        else
            cout << BFS(&maps[0][0], x1, y1, x2, y2) << endl;
    }
    return 0;
}
