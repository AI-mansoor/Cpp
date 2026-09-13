# include <iostream>
# include <cmath>
using namespace std;

// finding permutation of n and r
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }

}

int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}           

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    if (r > n) {
        cout << "Error: r cannot be greater than n." << endl;
        return 1;
    }

    int result = permutation(n, r);
    cout << "Permutation P(" << n << ", " << r << ") = " << result << endl;

    return 0;
}

