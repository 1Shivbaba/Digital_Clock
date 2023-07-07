// Digital clock

#include <stdio.h>
#include <windows.h>


int main()
{
    
    int h, m, s;
    int d = 1; // we add a delay of 1 second and we use it in function sleep

    printf("Set The Time: \n");
    scanf("%d%d%d", &h, &m, &s);

    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR !\n");
        exit(0);
    }

    while (1) // This is an infinite loop and anything inside will repeat itself to infinite
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("\n* TIME NOW * ");
        printf("\n %02d:%02d:%02d", h, m, s); // This is the formate of clock 00:00:00
        sleep(d); // this function sleep slows down the while loop and make it more like a real clock
        
    }

    //  return 0;
}