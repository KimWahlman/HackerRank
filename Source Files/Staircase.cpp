void staircase(int n)
{
    for(unsigned int i = 1; i <= n; i++)
    {
        // How many spaces till the first #
        // Example: if i = 1 and n = 8 the first row will have 7 spaces
        for(unsigned int space = i; space < n; space++)
        {
            std::cout << " ";
        }
        
        for(unsigned int star = 0; star <= (i - 1); star++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }
}
