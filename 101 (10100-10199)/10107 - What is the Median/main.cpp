#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<long long int> arr;
    long long int n;
    while(cin >> n){
        arr.push_back(n);
        sort(arr.begin(), arr.end());
        if(arr.size()%2==0){
            cout << (arr[arr.size()/2-1]+arr[arr.size()/2])/2 << endl;
        }else{
            cout << arr[arr.size()/2] << endl;
        }
    }
    return 0;
}
