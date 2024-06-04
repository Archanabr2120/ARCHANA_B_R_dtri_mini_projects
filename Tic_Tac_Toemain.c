#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int r_num, c_num, count = 0;

label:
    printf("Enter X (row column): ");
    scanf("%d%d", &r_num, &c_num);
    if (arr[r_num][c_num] != 0 || r_num < 0 || r_num > 2 || c_num < 0 || c_num > 2) {
        printf("Invalid ,Try again.\n");
        goto label;
    }
    arr[r_num][c_num] = 1;
    count++;
    printf("Enter O (row column): ");
    scanf("%d%d", &r_num, &c_num);
    if (arr[r_num][c_num] != 0 || r_num < 0 || r_num > 2 || c_num < 0 || c_num > 2) {
        printf("Invalid , Try again.\n");
        goto label;
    }
    arr[r_num][c_num] = 2;
    count++;

    if (count > 4) {

        for (int i = 0; i < 3; i++) {
            if (arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1) {
                printf("X win\n");
                return 0;
            }
        }


        for (int j = 0; j < 3; j++) {
            if (arr[0][j] == 1 && arr[1][j] == 1 && arr[2][j] == 1) {
                printf("X win\n");
                return 0;
            }
        }


        if ((arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1) || (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1)) {
            printf("X win\n");
            return 0;
        }


        for (int i = 0; i < 3; i++) {
            if (arr[i][0] == 2 && arr[i][1] == 2 && arr[i][2] == 2) {
                printf("O win\n");
                return 0;
            }
        }

        for (int j = 0; j < 3; j++) {
            if (arr[0][j] == 2 && arr[1][j] == 2 && arr[2][j] == 2) {
                printf("O win\n");
                return 0;
            }
        }

        if ((arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2) || (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2)) {
            printf("O win\n");
            return 0;
        }

        if (count == 9) {
            printf("It's a draw!\n");
            return 0;
        }
    }

    goto label;

    return 0;
}
