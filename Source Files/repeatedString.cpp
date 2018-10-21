long repeatedString(std::string &str, long n)
{
    unsigned long amountOfAs = 0, counter = 0, remainder = 0;

    for(long i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a')
        {
            amountOfAs++;
        }
    }

    counter = amountOfAs * (n / str.size());

    for(unsigned long i = 0; i < (n % str.size()); i++)
    {
        if(str[i] == 'a')
        {
            counter++;
        }
    }

    return counter;
}
