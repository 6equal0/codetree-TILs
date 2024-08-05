#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n, temp, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        sum += temp;
    }

    string s = to_string(sum);

    for(int i = 1; i < s.length(); i++){
        cout << s[i];
    }

    cout << s[0];

    return 0;
}