#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Use Sleep on Windows instead

int main() {
    int choice;
    int blinking = 0;

    while (1) {
        if (!blinking) {
            // Show menu only when not blinking
            printf("\n=== LED CONTROL MENU ===\n");
            printf("1. Turn LED ON\n");
            printf("2. Turn LED OFF\n");
            printf("3. Start LED Blinking\n");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("LED ON 💡\n");
                    break;
                case 2:
                    printf("LED OFF ❌\n");
                    break;
                case 3:
                    blinking = 1;
                    break;
                case 4:
                    printf("Exiting program. Goodbye!\n");
                    exit(0);
                default:
                    printf("Invalid choice. Try again.\n");
            }
        } else {
            char stop;
            printf("LED ON 💡\n");
            sleep(1);
            printf("LED OFF ❌\n");
            sleep(1);

            // Ask if the user wants to stop blinking
            printf("Do you want to stop blinking? (y/n): ");
            scanf(" %c", &stop);

            if (stop == 'y' || stop == 'Y') {
                blinking = 0;
                printf("Stopped blinking.\n");
            }
        }
    }

    return 0;
}
