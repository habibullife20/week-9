#include <iostream>
using namespace std;

int main() {

    int n, product = 1, largest = 1, x;
    cin >> n;

    while (n>0) {
        x = n%10;
        if (x!=0) {
            product = product*x;
        }

        if (x>largest) {
            largest = x;
        }

        n=n/10;
    }
    cout << product << " " << largest << endl;

    return 0;
}
