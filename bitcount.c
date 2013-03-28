#include <stdio.h>
int bitcount(unsigned x)
{
    int counter = 0;
    while(x)
    {
        counter++;
        x &= x-1;
    }
    return counter;
}

main()
{
    int input,i;
    scanf("%d", &input);
    int output = bitcount(input);
    printf("result %d\n", output);
}
