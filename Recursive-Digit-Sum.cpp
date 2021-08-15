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

