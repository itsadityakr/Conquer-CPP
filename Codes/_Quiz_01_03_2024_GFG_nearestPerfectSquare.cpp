#include <iostream>
#include <cmath>
using namespace std;

bool check(long long n) {
    long long squareRootOfN = sqrt(n);
    return squareRootOfN * squareRootOfN == n;
}

long long nearestPerfectSquare(long long n) {
    if (check(n)) {
        long long closestPSlessThanN = sqrt(n) - 1;
        return closestPSlessThanN * closestPSlessThanN;
    } else {
        long long closestPSlessThanN = sqrt(n);
        long long closestPSgreaterThanN = closestPSlessThanN + 1;
        long long squareLessThanN = closestPSlessThanN * closestPSlessThanN;
        long long squareGreaterThanN = closestPSgreaterThanN * closestPSgreaterThanN;
        if (abs(n - squareLessThanN) <= abs(n - squareGreaterThanN)) {
            return squareLessThanN;
        } else {
            return squareGreaterThanN;
        }
    }
}

int main() {
    long long n = 23;
    cout << "Nearest perfect square to " << n << " is: " << nearestPerfectSquare(n) << endl;
    return 0;
}
