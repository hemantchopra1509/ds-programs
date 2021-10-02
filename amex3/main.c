#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Enter M:");
    int m = 0;
    scanf("%d", &m);

    int arr[100] = {0};
    printf("The array is:\n");
    switch(m) {
        case 2:
            printf("No solution\n");
            return 0;
        case 1:
        case 3:
        case 5:
        case 7:
            printf("%d\n", m);
            return 0;
    }

    int sum = 0;
    int count = 0;
    for (int i = 1; (sum + i) < m; i+= 2) {
        arr[count++] = i;
        sum += i;
    }
    int start = 0;
    int r = m - sum;
    if (r % 2 == 0) {
        arr[count - 1] += r;
    } else if (r > arr[count - 1]) {
        arr[count++] = r;
    } else {
        start = 1;
        arr[count - 1] += r + 1;
    }

    for (int i = start; i < count; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
