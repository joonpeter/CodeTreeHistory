#include <iostream>
#include <vector>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }
    // Please write your code here.

    vector<pair<int, char>> arr1(n); //input
    for(int i=0;i<n;i++){
        arr1[i].first=x[i];
        arr1[i].second=dir[i];
        //cout<<arr1[i].first; 
        //cout<<arr1[i].second;
    }

    vector<int> cnt_overlap(2001,0); //count overlap

    int cur=1000;
    for(int i=0; i<n; i++){
        int until=arr1[i].first;
        if(arr1[i].second=='R'){
            for(int j=0; j<until; j++){
                cnt_overlap[cur]++;
                cur++;
            }   
        }else{
            for(int j=until; j>0; j--){
                cur--;
                cnt_overlap[cur]++;
            }
        }
        
    }

    int cnt=0;
    for(int i=0;i<2001;i++){
        if(cnt_overlap[i]>=2){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}