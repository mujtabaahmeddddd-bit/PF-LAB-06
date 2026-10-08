#include <stdio.h>

int main() {
    int access_num;
    int hour;
    int is_late_night;
    int allowed;

    while (1) {
        printf("Enter stored access number (9999 to end shift): ");
        scanf("%d", &access_num);

        if (access_num == 9999) {
            printf("Shift ended.\n");
            break;
        }

        printf("Enter current hour (0-23): ");
        scanf("%d", &hour);

        is_late_night = (hour >= 22 || hour < 6) ? 1 : 0;

        if (is_late_night == 1) {
            printf("Mode: LATE NIGHT MODE\n");
        } else {
            printf("Mode: STANDARD MODE\n");
        }

        if (is_late_night == 1) {
            allowed = ((access_num & 8) != 0);
        } else {
            allowed = (((access_num & 1) != 0) || ((access_num & 2) != 0) || ((access_num & 4) != 0));
        }

        if (allowed) {
            printf("Gate Decision: ACCESS GRANTED\n");
        } else {
            printf("Gate Decision: ACCESS DENIED\n");
        }

        if ((access_num & 4) != 0) {
            printf("Note: Member has Personal Trainer Access.\n");
        } else {
            printf("Note: Member does NOT have Personal Trainer Access.\n");
        }

        printf("\n");
    }

    return 0;
}