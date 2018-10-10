// Maybe not the most fancy solution, but it worked.
// Code may be updated in the future when I am more skilled.
int diagonalDifference(std::vector<std::vector<int>> arr)
{
    long long int temp = 0, temp2 = 0, res = 0, j = arr.size();
    for(unsigned int i = 0; i < arr.size(); i++)
    {
        temp += arr[i][i];
        temp2 += arr[--j][i];
    }

    return abs(temp-temp2);
}
