#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    return original == reversed;
}

int main() {
    
    int n;
    cin >> n;
    long long sum = 0;
    
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            sum = sum + i;
        }
    }

    cout << sum << endl;
    return 0;
}
