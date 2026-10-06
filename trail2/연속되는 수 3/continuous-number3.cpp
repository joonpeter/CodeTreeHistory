#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    // Please write your code here.

    int cnt=1,maxcnt=1;

    for(int i=0;i<N;i++){
        if ((arr[i] > 0 && arr[i - 1] > 0) ||
            (arr[i] < 0 && arr[i - 1] < 0)) {
            cnt++;
        }else{
            cnt=1;
        }

        if(cnt>maxcnt){
            maxcnt=cnt;
        }
    }
    cout<<maxcnt;  

    return 0;
}