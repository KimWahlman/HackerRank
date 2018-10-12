int birthdayCakeCandles(std::vector<int> arr)
{
    int talest = *std::max_element(arr.begin(), arr.end()), res = 0;
    for(unsigned int i = 0; i < arr.size(); i++)
        if(arr[i] == talest)
            res++;
    return res;
}
