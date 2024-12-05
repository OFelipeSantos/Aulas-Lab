# Exercício 1: 
    #include <stdio.h>
    #include <stdlib.h>
    
    int contador = 0;
    
    void incrementarContador(){
        contador++;
        printf("Valor atual do contador: %d\n", contador);
    }
    
    void exemploVariavelLocal(){
        int valorLocal = 10;
        valorLocal++;
        printf("Valor atual de valorLocal: %d\n", valorLocal);
    }   
    
    
    int main() {
        printf("Demonstração: \n");
        for (int i = 0; i <= 4; i++) {
            printf("\nRepetição %d:\n", i + 1);
            incrementarContador();  
            exemploVariavelLocal();  
        }
    
        return 0;
    }

# Exercício 2: 
    #include <stdio.h>
    #include <stdlib.h>
    
    int resultado = 0; 
    
    void calcularSomaGlobal(int x, int y){
        resultado = x + y; 
        printf("O valor do resultado é: %d\n", resultado);
    }
    void calcularSomaLocal(int x, int y){
        int resultado; 
        resultado = x + y; 
        printf("O valor do resultado é: %d\n", resultado);
    }
    
    int main(){
        int x, y; 
        printf("Informe dois números inteiros: ");
        scanf("%d%d", &x, &y);
        
        printf("\nUsando a variável global: \n");
        calcularSomaGlobal(x, y);
        
        printf("\nUsando a variável local: \n");
        calcularSomaLocal(x, y);
        
     return 0;
    }
