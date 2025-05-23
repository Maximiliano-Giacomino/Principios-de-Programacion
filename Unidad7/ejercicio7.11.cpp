#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    char letra = '!';

    for (int i = 0; i < 128; i++)
    {
        cout << letra << endl;
        letra++;
    }

    return 0;
}