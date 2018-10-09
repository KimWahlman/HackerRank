long long int aVeryBigSum(vector<long> ar) 
{
    long long int res = 0;
    for(unsigned int i = 0; i < ar.size(); i++)
    {
        res += ar[i];
    }
    return res;
}
