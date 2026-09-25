#include <iostream>
#include <vector>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.

    for (int i = 0; i < N; i++) {
        x1[i]+=100;
        y1[i]+=100;
        x2[i]+=100;
        y2[i]+=100;
    }
    
    int arr[201][201]={0,};
    for(int i=0; i<N; i++){
        for(int x=x1[i]; x<x2[i]; x++){
            for(int y=y1[i]; y<y2[i]; y++){
                arr[x][y]=1;
            }
        }
    }

    int cnt=0;

    for(int x=0; x<201; x++){
        for(int y=0; y<201; y++){
            if(arr[x][y]==1){
                cnt++;
            }
        }
       
    }   

    cout<<cnt;

    return 0;
}
