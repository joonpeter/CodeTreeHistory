#include <iostream>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    
    for(int i=0;i<N;i++){
        x[i]+=100;
        y[i]+=100;
    }

    int arr[201][201]={0,};

    for(int i=0;i<N;i++){
        for(int xx=x[i];xx<x[i]+8;xx++){
            for(int yy=y[i];yy<y[i]+8;yy++){
                arr[xx][yy]=1;
            }
        }
    }

    int cnt=0;
    for(int xx=0;xx<201;xx++){
        for(int yy=0;yy<201;yy++){
            if(arr[xx][yy]==1){
                cnt++;
            }
        }
    }


    cout<<cnt;
    

    return 0;
}