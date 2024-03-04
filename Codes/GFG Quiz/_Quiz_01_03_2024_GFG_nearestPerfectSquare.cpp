#include <iostream>
#include <cmath>
using namespace std;

bool check(long long n) {
    long long squareRootOfN = sqrt(n);
    return squareRootOfN * squareRootOfN == n;
}
long long nearestPerfectSquare(long long n) {
    if (check(n)) {
        long long psLn = sqrt(n) - 1;
        return psLn * psLn;
    } else {
        long long psLn = sqrt(n);
        long long psGn = psLn + 1;
        long long sqLn = psLn * psLn;
        long long sqGn = psGn * psGn;
        if (abs(n - sqLn) <= abs(n - sqGn)) {
            return sqLn;
        } else {
            return sqGn;
        }
    }
}

int main() {
    long long n = 23;
    cout << "Nearest perfect square to " << n << " is: " << nearestPerfectSquare(n) << endl;
    return 0;
}
