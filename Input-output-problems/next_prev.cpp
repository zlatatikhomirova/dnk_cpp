#include <cstdio>

int main () {
    int n; /* current number */
    scanf("%d", &n);
    printf("The next number for the number %d is %d.\n", n, n+1);
    printf("The previous number for the number %d is %d.", n, n-1);
    return 0;
}
