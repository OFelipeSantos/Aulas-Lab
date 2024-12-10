#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int a;
    signed int b;
    short int c; 
    long int d; 
    unsigned long int e;
    int soma;
    unsigned int multip;
    long int sub;
    
    printf("=== Exercício de Signed, Unsigned, Short e Long ===\n"); 

    printf("Digite o valor de unsigned int (0 a %u): ", UINT_MAX);
    scanf("%u", &a); 

        if (a > UINT_MAX) {
            printf("Erro: O valor para unsigned int deve estar entre 0 e %u.\n", UINT_MAX);
            return 1;
        }

    printf("Digite o valor de signed int (%d a %d): ", INT_MIN, INT_MAX);
    scanf("%d", &b); 

        if (b < INT_MIN || b > INT_MAX) {
            printf("Erro: O valor para signed int deve estar entre %d e %d.\n", INT_MIN, INT_MAX);
            return 1;
        }

    printf("Digite o valor de short int (%d a %d): ", SHRT_MIN, SHRT_MAX);
    scanf("%hd", &c); 

        if (c < SHRT_MIN || c > SHRT_MAX) {
            printf("Erro: O valor para short int deve estar entre %d e %d.\n", SHRT_MIN, SHRT_MAX);
            return 1;
        }

    printf("Digite o valor de long int (%ld a %ld): ", LONG_MIN, LONG_MAX);
    scanf("%ld", &d); 

        if (d < LONG_MIN || d > LONG_MAX) {
            printf("Erro: O valor para long int deve estar entre %ld e %ld.\n", LONG_MIN, LONG_MAX);
            return 1;
        }

    printf("Digite o valor de unsigned long int (0 a %lu): ", ULONG_MAX);
    scanf("%lu", &e); 
    
        if (e > ULONG_MAX) {
            printf("Erro: O valor para unsigned long int deve estar entre 0 e %lu.\n", ULONG_MAX);
            return 1;
        }
  
    printf("\n--- Resultados ---\n");
    printf("  Unsigned int: %u\n", a);
    printf("  Signed int: %d\n", b);
    printf("  Short int: %hd\n", c);
    printf("  Long int: %ld\n", d);
    printf("  Unsigned long int: %lu\n", e);

    printf("\n--- Operações ---\n");
        soma = b + c;
        printf("Soma (signed int + short int): %d + %hd = %d\n", b, c, soma);
    
        multip = a * 2;
        printf("Multiplicação (unsigned int * 2): %u * 2 = %u", a, multip);
          if (multip < a) {
              printf(" (Overflow detectado)\n");
          } else {
              printf("\n");
          }
    
        sub = d - b;
        printf("Subtração (long int - signed int): %ld - %d = %ld\n", d, b, sub);

    return 0;
}
