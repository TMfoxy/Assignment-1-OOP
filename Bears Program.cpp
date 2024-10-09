#include <iostream>
using namespace std;
bool B(int n) {
    if (n == 42) {
        return true;
    }
    if (n < 42) {
        return false;
    }
    if (n % 2 == 0 && B(n / 2)) {
        return true;
    }
    if ((n % 3 == 0 || n % 4 == 0)) {
        int x = n % 10;
        int y = (n % 100) / 10;
        int z= x * y;
        if (z > 0 && B(n - z )) {
            return true;
        }
    }
    if (n % 5 == 0 && B(n - 42)) {
        return true;
    }
    return false;
}
int main() {
    int n;
    cout << "number of bears:";
    cin >> n;
    if (B(n)) {
        cout << "bear " << n << " is Ture" <<
        endl;
    } else {
        cout << "bear " << n << " is No" <<endl;
    }
    return 0;
}
