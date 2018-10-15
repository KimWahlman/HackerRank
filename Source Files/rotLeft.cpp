std::vector<int> rotLeft(std::vector<int> &arr, const int d) 
{
    // std::rotate is found in the algorithm header.
    // std::rotate performs a left rotation on a range of elements.
    // The complexity is linear in the distance between start and end.
    // More information on this function can be found here: https://en.cppreference.com/w/cpp/algorithm/rotate
    std::rotate(arr.begin(), arr.begin() + d, arr.end());
    return arr;
}
