// Exercice réalisé par Michel Taing avec Jeanne Boulet 
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
#include <fstream>
#include <sys/stat.h>
using namespace std;


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

bool motiveinString(string s, string motive)
{
    if (s.size() < motive.size())
    {
        return false;
    }
    for (int i = 0; i < s.size() - motive.size(); i++)
    {
        bool test = true;
        for (int j = 0; j < motive.size(); j++)
        {
            if (!(s[i + j] == motive[j]))
            {
                test = false;
            }
        }
        if (test)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int count = 0;
    cout << "Please type the path to the file and the motive :" << endl;
    string m;
    string x;
    cin >> x >> m; // Cette ligne est nécessaire pour pouvoir recevoir correctement l'entrée
    cout << x << endl;
    struct stat buffer;
    if (stat(x.c_str(), &buffer) == 0)
    {
        fstream myfile;
        myfile.open(x);
        getline(myfile, x);
        vector<string> WordsList = splitstring(x);
        for (int i = 0; i < WordsList.size(); i++)
        {
            string s = WordsList[i];
            cout << s << endl;
            if (motiveinString(s,m))
            {
                count++;
            }
            cout << count << endl;
        }
        myfile.close();
        cout << "the file " << count << " contains " << count << " words containing the motive " << m << endl;
        return 0;
    }
    else
    {
        cout << stat(x.c_str(), &buffer) << endl;
        cout << "The file " << x << " could not be opened.";
        return 1;
    }
}

