#include <iostream>
#include <vector>

using namespace std;

int N, K;
int A[100], B[100];
vector<int> arr;

int main() {
    cin >> N >> K;
    arr.resize(N,0);

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
      
    for(int i=0; i<K; i++){
        for(int j=A[i]; j<=B[i]; j++){
            arr[j-1]++;
        }
    }

    int max=0;
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;

    return 0;
}