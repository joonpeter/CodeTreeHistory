#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];
    
    // Please write your code here.

    for(int i=0;i<3;i++){
        x1[i]+=1000;
        x2[i]+=1000;
        y1[i]+=1000;
        y2[i]+=1000;
    }

    static int arr[2001][2001] = {0,};

    for(int i=0; i<=2; i++){
        if(i<2){
            for(int x=x1[i]; x<x2[i]; x++){
                for(int y=y1[i]; y<y2[i]; y++){
                    arr[x][y]=1;
                }
            }
        }else{
            for(int x=x1[i]; x<x2[i]; x++){
                for(int y=y1[i]; y<y2[i]; y++){
                    arr[x][y]=0;
                }
            }
        }
    }

    int cnt=0;
    for(int i=0; i<=2; i++){
        if(i<2){
            for(int x=x1[i]; x<x2[i]; x++){
                for(int y=y1[i]; y<y2[i]; y++){
                    if(arr[x][y]==1){
                        cnt++;
                    }
                }
            }
        }
    }

    cout<<cnt;

    return 0;
}