#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.

    for(int i=0;i<2;i++){
        x1[i]+=1000;
        y1[i]+=1000;
        x2[i]+=1000;
        y2[i]+=1000;
    }

    int arr[2001][2001]={0,};

    for(int i=0;i<2;i++){
        if(i==0){
            for(int x=x1[i];x<x2[i];x++){
                for(int y=y1[i];y<y2[i];y++){
                    arr[x][y]=1;
                }
            }
        }else{
            for(int x=x1[i];x<x2[i];x++){
                for(int y=y1[i];y<y2[i];y++){
                    arr[x][y]=0;
                }
            }
        }
    }

    int x_min=2001, x_max=-1, y_min=2001, y_max=-1;
    for(int i=0;i<2001;i++){
        for(int j=0;j<2001;j++){
            if(arr[i][j]==1){
                if(i<x_min) x_min=i;
                if(i>x_max) x_max=i;
                if(j<y_min) y_min=j;
                if(j>y_max) y_max=j;
            }
        }
    }

    if(x_max==-1){
        cout<<'0';
    }else{
        cout<<(x_max-x_min+1)*(y_max-y_min+1);
    }
    
    return 0;
    
}