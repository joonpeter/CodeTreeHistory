#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    int cnt=0, maxcnt=0;

    for(int i=1;i<=n;i++){
        if(arr[i-1]>t){
            cnt++;
        }else{
            cnt=0;
        }

        if(cnt>maxcnt){
            maxcnt=cnt;
        }
    }

    cout<<maxcnt;

    return 0;
}