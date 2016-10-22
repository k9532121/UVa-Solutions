#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a, string b){
    return (a+b) > (b+a);
}
int main(){
    int n;
    while(cin >> n){
        if(n==0) break;
        int i;
        string tmp;
        vector<string> arr;
        for(i=0;i<n;i++){
            cin >> tmp;
            arr.push_back(tmp);
        }
        sort(arr.begin(), arr.end(), cmp);
        for(i=0;i<n;i++)
            cout << arr[i];
        cout << endl;
    }
    return 0;
}
