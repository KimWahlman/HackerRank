// First solution
int jumpingOnClouds(std::vector<int> arr) {
    int jumps = 0;

    for (int i = 0; i < arr.size() - 1; jumps++)
    {
        if(arr[i + 2] == 0)
        {
            i += 2;
        }
        else
        {
            i++;
        }
    }
    return jumps;
}

// Second solution, if-statement in the assignment rather than seperate.
int jumpingOnClouds(std::vector<int> arr) 
{
    int jumps = 0;

    for (int i = 0; i < arr.size() - 1; jumps++)
    {
        // 1 is to make sure we always jump forward at least 1 cloud.
        // if the if-statement is false it will be 1 + 0, otherwise 1 + 1.
        i += 1 + (i + 2 < arr.size() && !arr[i + 2]);
    }
    return jumps;
}
