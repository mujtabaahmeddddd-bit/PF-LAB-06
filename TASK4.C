#include <stdio.h>

int main() {
    int num_containers;
    int i;
    float weight;
    int cargo_type;
    int tracking_code;

    printf("Enter total number of containers today: ");
    scanf("%d", &num_containers);

    for (i = 1; i <= num_containers; i++) {
        printf("\n--- Container %d ---\n", i);
        
        printf("Enter container weight (kg): ");
        scanf("%f", &weight);
        printf("Enter cargo type (1: General, 2: Hazardous, 3: Refrigerated): ");
        scanf("%d", &cargo_type);

        switch (cargo_type) {
            case 1:
                if (weight <= 20000) {
                    printf("Status: LOAD APPROVED\n");
                } else {
                    printf("Status: REJECTED (Weight limit exceeded)\n");
                }
                break;

            case 2:
                if (weight <= 15000 && (i % 2 != 0)) {
                    printf("Status: LOAD APPROVED\n");
                } else {
                    printf("Status: REJECTED (Overweight or even container turn)\n");
                }
                break;

            case 3:
                if (weight <= 18000) {
                    printf("Status: LOAD APPROVED\n");
                } else {
                    printf("Status: REJECTED (Weight limit exceeded)\n");
                }
                break;

            default:
                printf("Status: REJECTED (Invalid cargo code)\n");
                break;
        }

        tracking_code = ((int)weight % 97) % 100;
        printf("Tracking Code: %02d\n", tracking_code);
    }

    return 0;
}