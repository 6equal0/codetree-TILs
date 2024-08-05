#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, temp, min = INT_MAX;
    cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++){
        temp = arr[i] - arr[i-1];

        if(temp < min){
            min = temp;
        }

        if(temp == 0){
            break;
        }
    }

    cout << min;

    return 0;
}