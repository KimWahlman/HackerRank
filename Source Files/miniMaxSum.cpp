void miniMaxSum(std::vector<int> arr)
{
    // INT_MAX is not big enough for the problem over at HackerRank, so we need to use LONG_MAX instead. 
    long long int currMin = LONG_MAX, currMax = LONG_MIN, value = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(i != j)
            {
                value += arr[j];
            }
        }
        currMin = std::min(currMin, value);
        currMax = std::max(currMax, value);
        value = 0;
    }
    std::cout << currMin << " " << currMax;
}
