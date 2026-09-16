#include <iostream>
#include <vector>

using namespace std;

int n;
int x1[100], x2[100];

int main() { 
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.

    vector<pair<int, int>>arr;
    for(int i=0;i<n;i++){
        arr.push_back({x1[i], x2[i]});
    }

    int cnt[101]={0,};
    for(int i=0;i<n;i++){
        for(int j=x1[i];j<=x2[i];j++){
            cnt[j]++;
        }
    }
    int max=0;
    for(int x=0;x<=100;x++){
        if(cnt[x]>max){
            max=cnt[x];
        }
    }
    cout<<max;
    return 0;
}