//#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    
    printf("Digite um número: ");
    scanf("%d", &n);

    
    while (b <= n) {
        if (b == n) {
            printf("O número %d pertence à sequência de Fibonacci.", n);
            return 0;
        }

        c = a + b;
        a = b;
        b = c;
    }

    printf("O número %d não pertence à sequência de Fibonacci.", n);
    return 0;
}