#include <iostream>
#include <vector>
#include "biginteger.h"
#include "rational.h"

#include <bits/stdc++.h>

using namespace std;

using std::cin;
using std::cout;
using std::vector;
using std::string;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

template<class T>
constexpr T max() {
    return std::numeric_limits<T>::max();
}

template<class T>
constexpr T min() {
    return std::numeric_limits<T>::min();
}

template <typename T>
void runTest(T v) {
    cout << v << '\n';
}

bool checkTest(int a, int b) {
    if (a + b != BigInteger(a) + BigInteger(b)) {
        cout << a << ' ' << b << ' ' << a + b << " ~ " << BigInteger(a) + BigInteger(b) << '\n';
        return false;
    }
    return true;
}

void solve() {
}

int main() {
    solve();
}
