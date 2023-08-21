#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n % 2 == 1 || n < 2 * k || k == 1) {
        cout << "No solution" << endl;
        return 0;
    }

    int x = (n / 2 - k) / (k - 1);
    int y = (n / 2 - k) % (k - 1);

    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
