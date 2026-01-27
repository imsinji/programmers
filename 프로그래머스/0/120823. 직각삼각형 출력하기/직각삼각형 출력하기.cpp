#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    for (size_t i = 1; i <= n; ++i) {
        cout << string(i, '*') << endl;
    }
    return 0;
}