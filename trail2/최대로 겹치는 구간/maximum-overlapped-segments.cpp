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
        arr.push_back({x1[i],x2[i]});
    }
    
    vector<int>cnt(201,0);

    for(int j=0;j<n;j++){
        for(int i=arr[j].first; i<arr[j].second; i++){
            cnt[i+100]++;
        }
    }

    int max=0;
    for(int i=0;i<201;i++){
        if(cnt[i]>max){
            max=cnt[i];
        }
    }

    cout<<max;

    return 0;
}