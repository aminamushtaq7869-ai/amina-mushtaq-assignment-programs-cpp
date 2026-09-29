#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three different numbers: ";
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a > c && a < b))
        cout << "First is Second Largest";

    if ((b > a && b < c) || (b > c && b < a))
        cout << "Second is Second Largest";

    if ((c > a && c < b) || (c > b && c < a))
        cout << "Third is Second Largest";

    return 0;

