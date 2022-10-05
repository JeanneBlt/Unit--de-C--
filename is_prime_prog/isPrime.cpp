// Exercice réalisé par Michel Taing avec Jeanne Boulet 
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
using namespace std;

bool isPrime(const int n)
{
    for (int i = 2; i <= sqrt(n); i++)  // On peut démontrer qu'aller simplement jusqu'à la racine carrée suffit
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<string> splitstring(string s)
{
    int start, end = -1; // On initialise le end à -1 pour ignorer la taille de string s
    vector<string> txt;
    do
    {
        start = end + 1; // On replace start après le dernier end et avec le +1 on s'assure de la fin du programme
        end = s.find(" ", start); // On assigne à end la valeur de la position du premier " " à partir de la position start
        txt.push_back(s.substr(start, end - start));
    } while (end != -1);  // Le programme s'arrête lorsque end atteint -1
    return txt;
}

int main()
{
    cout << "Please type one or more positive integer(s)." << endl;
    string x;
    getline(std::cin >> std::ws, x); // Cette ligne est nécessaire pour pouvoir recevoir correctement l'entrée
    vector<string> NumbersList = splitstring(x);
    for (int i = 0; i < NumbersList.size(); i++)
    {
        int n = stoi(NumbersList[i]);
        if (isPrime(n))
        {
            cout << n << " is a prime : True" << endl;
        }
        else
        {
            cout << n << " is not a prime : False" << endl;
        }
    }
    return 0;
}

