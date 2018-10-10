void plusMinus(std::vector<int> arr)
{
    int pos = 0, neg = 0, zero = 0;
    for(unsigned int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < 0)
            neg++;
        else if(arr[i] > 0)
            pos++;
        else if(arr[i] == 0)
            zero++;
    }
    std::cout << std::fixed << std::setprecision(6) << (float)pos/arr.size() << "\n" << (float)neg/arr.size() << "\n" << (float)zero/arr.size() << "\n";
}
