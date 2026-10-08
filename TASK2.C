#include <stdio.h>

int main() {
    int appliances;
    int option;

    while (1) {
        printf("Enter resident combined appliance value (-1 to end): ");
        scanf("%d", &appliances);

        if (appliances == -1) {
            printf("Shift done for the night.\n");
            break;
        }

        printf("1. Switch water heater ON\n");
        printf("2. Switch air conditioner OFF\n");
        printf("3. Flip main lights\n");
        printf("4. Report security camera status\n");
        printf("Choose option (1-4): ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                appliances = appliances | 2;
                break;
            case 2:
                appliances = appliances & (~4);
                break;
            case 3:
                appliances = appliances ^ 1;
                break;
            case 4:
                if ((appliances & 8) != 0) {
                    printf("Security Camera: ACTIVE\n");
                } else {
                    printf("Security Camera: INACTIVE\n");
                }
                break;
        }

        printf("New combined appliance value: %d\n", appliances);

        if (((appliances & 4) != 0) && ((appliances & 2) != 0)) {
            printf("OVERLOAD RISK: Air Conditioner and Water Heater are BOTH ON!\n");
        }

        printf("\n");
    }

    return 0;
}