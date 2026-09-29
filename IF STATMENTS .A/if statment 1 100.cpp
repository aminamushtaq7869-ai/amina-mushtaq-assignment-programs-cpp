#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 0 && n % 2 == 0)
        cout << "Positive Even Number";

    return 0;
}
