#include <stdio.h>

void matchstickGame() {
    int matchsticks = 21;  // Initial number of matchsticks
    int playerPick, computerPick;

    while (matchsticks > 0) {
        // Player's turn
        printf("Matchsticks remaining: %d\n", matchsticks);
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &playerPick);

        // Ensure valid input
        while (playerPick < 1 || playerPick > 4 || playerPick > matchsticks) {
            printf("Invalid pick. Pick 1, 2, 3, or 4 matchsticks: ");
            scanf("%d", &playerPick);
        }

        matchsticks -= playerPick;

        if (matchsticks == 0) {
            printf("You picked the last matchstick. You win!\n");
            break;
        }

        // Computer's turn
        

        if (matchsticks > 1 && matchsticks <= 5) {
            computerPick = matchsticks - 1;
        } else {
            computerPick = (matchsticks % 5 == 0) ? 1 : matchsticks % 5;
        }

        printf("Computer picks %d matchstick(s).\n", computerPick);
        matchsticks -= computerPick;

        if (matchsticks == 0) {
            printf("Computer picked the last matchstick. Computer wins!\n");
            break;
        }
    }
}

int main() {
    printf("Welcome to the Matchstick Game!\n");
    printf("Each player takes turns picking 1, 2, 3, or 4 matchsticks.\n");
    printf("The first player to pick the last matchstick wins.\n");
    printf("Press Enter to start the game...\n");
    getchar();  // Wait for user input to start the game
    printf("\n");  // Add a blank line for better formatting
    printf("Game start!\n");

    matchstickGame();
    return 0;
}
