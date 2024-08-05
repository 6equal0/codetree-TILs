#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, min = INT_MAX, count = 0, temp;

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> temp;

        if(temp < min){
            min = temp;
            count = 1;
        }
        else if(temp == min){
            count++;
        }
    }

    cout << min << " " << count;

    return 0;
}