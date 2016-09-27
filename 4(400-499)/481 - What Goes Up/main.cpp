#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> ans_vec;
int main(){
    int num, ans=0, len, i, j, maxNum=1;
    vector<int> vec, vec_num, anss;
    while(cin >> num)
        vec.push_back(num);
    len = vec.size();
    for(i=0;i<len;i++)
        if(i==0){anss.push_back(vec[i]); vec_num.push_back(maxNum); }
        else
            if(anss[anss.size()-1] < vec[i]){
                vec_num.push_back(++maxNum);
                anss.push_back(vec[i]);
            }else{
                for(j = anss.size()-1; j >= 0; j--)
                    if(anss[j]<vec[i])
                        break;
                j++;
                anss[j] = vec[i];
                vec_num.push_back(++j);
            }
    reverse(vec_num.begin(),vec_num.end());
    reverse(vec.begin(),vec.end());
    cout << maxNum << endl;
    cout << "-" << endl;
    for(i = 0;i < vec_num.size(); i++)
        if(maxNum==vec_num[i])
            anss[--maxNum] = vec[i];
    for(i = 0; i < anss.size(); i++)
        cout << anss[i] << endl;
    return 0;
}
