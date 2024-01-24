#include<stdio.h>

int main() {
    int arr[2][2] = {
        {1, 2},
        {3, 4}
    };

    for (int col = 0; col < 2; col++) {
        for (int row = 0; row < 2;row++) {
            printf("%d ", arr[col][row]);  // Transpose indices
        }
        printf("\n");
    }

    return 0;
}

