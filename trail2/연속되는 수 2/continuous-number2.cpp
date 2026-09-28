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

    int continue_cnt=1;
    int continue_max=1;
    for(int i=1;i<N;i++){
        if(arr[i]==arr[i-1]){
            continue_cnt++;
        }else{
            if(continue_max<continue_cnt){
                continue_max=continue_cnt;
            }
            continue_cnt=1;
        }
    }

    if(continue_max<continue_cnt){
        continue_max=continue_cnt;
    }

    cout<<continue_max;

    return 0;
}