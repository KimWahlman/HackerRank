int hourglassSum(std::vector<std::vector<int>> &arr)
{
    if(arr.size() == 0) return 0;
    
    int totalSum = (arr[0][0] + arr[0][1] + arr[0][2] + arr[1][1] + arr[2][0] + arr[2][1] + arr[2][2]), 
        currentMaxSum = totalSum;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            totalSum = (arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);
            if(totalSum > currentMaxSum)
                currentMaxSum = totalSum;
        }
    }
    
    return currentMaxSum;
}
