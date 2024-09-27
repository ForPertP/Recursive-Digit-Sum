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

int superDigit2(string n, int k) {
    long long int sum = 0;

    for (int i = 0; i < n.size(); ++i)
    {
        sum += (n[i] - '0');
    }

    sum *= k;

    string p = to_string(sum);

    if (p.length() == 1)
    {
        return p[0] - '0';
    }
    else
    {
        return superDigit(p, 1);
    }
}


int superDigit3(string n, int k)
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

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    string n = first_multiple_input[0];

    int k = stoi(first_multiple_input[1]);

    int result = superDigit(n, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

