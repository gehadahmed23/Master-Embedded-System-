#include <stdio.h>

int find_unique_number(int a[], int size) {
     int i, count;
    for (i = 0; i < size; i++) {
        count = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count == 1) {
            return a[i];
        }
    }
    return -1;
}

int main() {
     int size;
    scanf("%d", &size);
    int a[100];
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int unique = find_unique_number(a, size);
    if (unique != -1) {
        printf("%d\n", unique);
    } else {
        printf("No unique number found\n");
    }
    return 0;
}
