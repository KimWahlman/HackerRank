std::vector<int> rotLeft(std::vector<int> &arr, const int d) 
{
    // std::rotate is found in the algorithm header.
    // std::rotate performs a left rotation on a range of elements.
    // The complexity is linear in the distance between start and end.
    // More information on this function can be found here: https://en.cppreference.com/w/cpp/algorithm/rotate
    std::rotate(arr.begin(), arr.begin() + d, arr.end());
    return arr;
}

/* 
// This code do what the challenge ask it to do, but it is to slow to solve this particular challenge.
// O(n^2) complexity if I ain't mistaken. 

std::vector<int> rotLeft(std::vector<int> &arr, const int d) 
{
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            int temp = arr[j];
            arr[j] = arr[j+1]
            arr[j+1] = temp;
        }
    } 
    return arr;
}

*/
