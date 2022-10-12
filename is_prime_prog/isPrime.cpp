Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@JeanneBlt 
LeHibouMT
/
CPPcourse
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
CPPcourse/is_prime_prog/main.cpp
@LeHibouMT
LeHibouMT files
Latest commit be24f64 2 hours ago
 History
 1 contributor
50 lines (47 sloc)  951 Bytes

// Exercice réalisé par Michel Taing avec Jeanne Boulet 
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
using namespace std;

bool isPrime(const long long& n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)  // On peut démontrer qu'aller simplement jusqu'à la racine carrée suffit
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
                cout << n << " is a prime: True" << endl;
            }
            else
            {
                cout << n << " is a prime: False" << endl;
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

Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
CPPcourse/main.cpp at main · LeHibouMT/CPPcourse