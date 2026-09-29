#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0)
        cout << "Divisible by 3 and 5";

    return 0;
}
