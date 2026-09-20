#include <iostream>
#include <vector>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.

    vector<pair<int, char>> arr_order(n);
    for(int i=0;i<n;i++){
        arr_order[i].first=x[i];
        arr_order[i].second=dir[i];
    }

    vector<pair<int,int>>arr_check(200001);
    //vector<int>result(200001,0);
    int cur=100000;

    for(int i=0; i<n; i++){
        if(arr_order[i].second=='R'){
            for(int j=0; j<arr_order[i].first; j++){
                arr_check[cur].first=1;
                arr_check[cur].second=1;
                if(j!=arr_order[i].first-1){
                    cur++;
                }
            }
        }else{
            for(int j=arr_order[i].first; j>0; j--){
                arr_check[cur].first=-1;
                arr_check[cur].second=1;
                if(j!=1){
                    cur--;
                }
            }
        }
    }

    int white=0;
    int black=0;
    for(int i=0; i<200001; i++){
        if(arr_check[i].second==0){
            continue;
        }else{
            if(arr_check[i].first==1){
                black++;
            }else{
                white++;
            }
        }
    }

    cout<<white<<" "<<black;

    return 0;
}