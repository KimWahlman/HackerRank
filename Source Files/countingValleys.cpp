//
// int n is only here because of the problem using it.
// 
int countingValleys(int n, std::string path)
{
    int numOfValleys = 0, currentLevel = 0, prevLevel = 0;
    bool isInValley = false;

    for(int i = 0; i < path.size(); i++)
    {
        prevLevel = currentLevel;
        if(prevLevel == 0 && isInValley)
            isInValley = false;

        if(prevLevel < 0 && !isInValley)
        {
            isInValley = true;
            numOfValleys++;
        }

        // Going Up
        if(path[i] == 'U')
            currentLevel++;

        // Going Down
        if(path[i] == 'D')
            currentLevel--;
    }

    return numOfValleys;
}
