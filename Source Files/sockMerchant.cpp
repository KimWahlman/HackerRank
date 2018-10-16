int sockMerchant(int n, std::vector<int> &arr)
{
    int temp[101] = { 0 },                  // We won't exceed 100 so it is fine to set it. 
        res = 0;

    for(int i = 0; i < arr.size(); i++)
        temp[arr[i]]++;                     // Take value from index arr[i] and increment by 1.
    for(int i = 0; i != 101; i++)
        if(temp[i] >= 2)                     // No need to do the res += ... operation on values lower than 2
            res += temp[i] / 2;

    return res;
}
