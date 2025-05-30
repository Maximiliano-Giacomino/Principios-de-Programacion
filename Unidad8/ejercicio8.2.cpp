#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Rewrite exercise 7.2 w/functions. 

bool is_prime(int N) {
    if (N == 0 || N == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < N; i++)
        {
            if (N % i == 0)
            {
                return false;
            }        
        }        
    }    
    return true;    
};

int main() {
    int cont = 1;
    while (cont < 1000)
    {
        if (is_prime(cont)) 
        {
            cout << cont << endl;
        }
        cont += 1;        
    }       

    return 0;
}
