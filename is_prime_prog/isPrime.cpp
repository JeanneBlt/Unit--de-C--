// Exercice r�alis� par Michel Taing avec Jeanne Boulet 
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
using namespace std;

bool isPrime(const long long& n)
{
    for (int i = 2; i <= sqrt(n); i++)  // On peut d�montrer qu'aller simplement jusqu'� la racine carr�e suffit
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv[])
{   
    long long n; 
    do 
    {
        cin >> n;
        if (cin.good())
        {
            if (isPrime(n))
            {
                cout << n << " is a prime : True" << endl;
            }
            else
            {
                cout << n << " is not a prime : False" << endl;
            }
        }
        else 
        {
            cin.clear();
            break;
        }
    } while ((cin.peek() != '\n'));
    return 0;
}

