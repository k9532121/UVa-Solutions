#include <iostream>
#include <queue>
using namespace std;
int BFS(int *maps, int x, int y, int n){
    int i, j, a, b, tmp, num, ans;
    pair<int, int> tmp1;
    pair <pair <int,int> , int> tmp2;
    queue<pair <pair <int,int> , int> > que;
    *(maps+(x*n)+y) = 4;
    tmp1.first = x; tmp1.second = y;
    tmp2.first = tmp1; tmp2.second = 0;
    que.push(tmp2);
    while(!que.empty()){
        tmp2 = que.front();
        que.pop();
        tmp1 = tmp2.first;
        a = tmp1.first; b = tmp1.second;
        num = tmp2.second;
        if(a-1 >= 0){
            tmp = *(maps+((a-1)*n)+b);
            if(tmp==3){
                ans = num+1;
                break;
            }else{
                if(tmp!=4){
                    *(maps+((a-1)*n)+b) = 4;
                    tmp1.first = a-1; tmp1.second = b;
                    tmp2.first = tmp1; tmp2.second = num+1;
                    que.push(tmp2);
                }
            }
        }
        if(b-1 >= 0){
            tmp = *(maps+(a*n)+(b-1));
            if(tmp==3){
                ans = num+1;
                break;
            }else{
                if(tmp!=4){
                    *(maps+(a*n)+(b-1)) = 4;
                    tmp1.first = a; tmp1.second = b-1;
                    tmp2.first = tmp1; tmp2.second = num+1;
                    que.push(tmp2);
                }
            }
        }
        if(a+1 < n){
            tmp = *(maps+((a+1)*n)+b);
            if(tmp==3){
                ans = num+1;
                break;
            }else{
                if(tmp!=4){
                    *(maps+((a+1)*n)+b) = 4;
                    tmp1.first = a+1; tmp1.second = b;
                    tmp2.first = tmp1; tmp2.second = num+1;
                    que.push(tmp2);
                }
            }
        }
        if(b+1 < n){
            tmp = *(maps+(a*n)+(b+1));
            if(tmp==3){
                ans = num+1;
                break;
            }else{
                if(tmp!=4){
                    *(maps+(a*n)+(b+1)) = 4;
                    tmp1.first = a; tmp1.second = b+1;
                    tmp2.first = tmp1; tmp2.second = num+1;
                    que.push(tmp2);
                }
            }
        }
    }
    return ans;
}
void map_start(int *maps, int *maps2, int n){
    int i, j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            *(maps2+(i*n)+j) = *(maps+(i*n)+j);
}
int main(){
    int n, i, j, ans, tmp;
    char c;
    while(cin >> n){
        int maps[n][n], maps2[n][n];
        vector<int> vec;
        ans = 0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++){
                cin >> c;
                maps[i][j] = int(c)-int('0');
            }
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(maps[i][j]==1){
                    map_start(&maps[0][0], &maps2[0][0], n);
                    tmp = BFS(&maps2[0][0], i, j, n);
                    if(tmp>ans) ans=tmp;
                }
        cout << ans << endl;
    }
    return 0;
}
