#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0) {
        return false;   // negative or 0 not allowed
    }
    
    return (n & (n - 1)) == 0;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << n << " is a Power of 2";
    else
        cout << n << " is NOT a Power of 2";

    return 0;
}
