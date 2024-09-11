#include<stdio.h>

int x(int n, int m) {
    if((n == m) || (m == 0)) return 1;
    else return (x(n-1, m) + x(n-1, m+1));
}


 int main() {
    printf("%d", x(5,3));
    // valor inderteminado e quantidade infinita de chamadas.

    return 0;
 }