#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */

int superDigit(string n, int k)
{
    long long int sum = 0;
    
    for (int i = 0 ; i < n.size() ; ++i)
    {
        sum = sum + k * (n[i] - 48);
    }
     
    string p = to_string(sum);    

    if (p.length() == 1)
    {
        return(p[0]-48); 
    }
    else
    {
        return superDigit(p,1);
    }
}

