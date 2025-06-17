#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "Es par";
    }
    else
    {
        cout << "Es impar";
    }

    return 0;
}