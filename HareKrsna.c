#include <stdio.h>

// Function to print the array in an infinite loop
void HareKrsna(int num)
{
    // Infinite loop
   for (int i = 0; i < 100; i++)
    {

        if (num == 2)
        {
            
             printf("Unfortunate soul try again later \n May Krsna bless you!! \n");
             break;
        }
        else if (num == 1)
           printf("Hare Krsna ");
           
            
    }
}

int main()
{
    int num; // Variable to hold user input
    printf("Enter to start program\n");
    getchar();
    printf("Enter 1 or 2\n");
    scanf("%d", &num); // Wait for user input before starting the infinite loop
    HareKrsna(num);           // Call the function
    return 0;
}
