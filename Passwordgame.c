#include <stdio.h>
#define FOUND 0
#define NOTFOUND 1
#include <string.h>

int main()
{
    char names[10][10] = {"2003",
                          "1235",
                          "3564",
                          "1256",
                          "2006"};
    int flag, i, a;
    char pass[10];

    flag = NOTFOUND;
    while (1)
    {
        printf("Enter the password: ");
        scanf("%s", pass);

        for (i = 0; i < 10; i++)
        {
            a = strcmp(&names[i][0], pass);
            if (a == 0)
            {
                

                // ASCII Art for "HARE KRISHNA"
                printf("HH   HH   AAA   RRRRR  EEEEE       K   K  RRRRR   SSSSS  N   N   AAA  \n");
                printf("HH   HH  A   A  R    R E           K  K   R    R S       NN  N  A   A \n");
                printf("HHHHHHH AAAAAAA RRRRR  EEEEE       KKK    RRRRR   SSSS   N N N  AAAAAA\n");
                printf("HH   HH A     A R   R  E           K  K   R   R      S   N  NN  A     A\n");
                printf("HH   HH A     A R    R EEEEE       K   K  R    R  SSSSS  N   N  A     A\n");

                flag = FOUND;
                
            }
        }
        if (flag == FOUND)
        {
            printf("You have entered the password correctly.\n");
            break;
        }

        if (flag == NOTFOUND)
        {
            printf("Sorry, you have entered an incorrect password.\n");
        }
    }
    return 0;
}
