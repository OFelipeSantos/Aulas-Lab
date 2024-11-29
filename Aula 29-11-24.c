# Exercício 1: 

    #include <stdio.h>
    
    struct cadastro{
        char nome[100];
        int idade;
        char endereco[200];
    };
    
    int main(){
        struct cadastro c; 
        
        printf("Digite o nome: ");
        fgets(c.nome, sizeof(c.nome), stdin);
        
        printf("Digite a idade: ");
        scanf("%d", &c.idade);
        getchar();
        
        printf("Digite o endereço: ");
        fgets(c.endereco, sizeof(c.endereco), stdin);
    
        printf("Nome: %s", c.nome);
        printf("Idade: %d\n", c.idade);
        printf("Rua: %s", c.endereco);
    
    return 0;
    }


## Exercício 2: 
    #include <stdio.h>
    #include <string.h>
    
    struct Aluno {
        char nome[100];
        char matricula[100];
        float notas[3];
    };
    
    int main() {
        struct Aluno a[5];
        struct Aluno aluno_maiorm;
        float maior = -1, media;
        int x, y;
    
        for (x = 0; x < 5; x++) {
            printf("Informe o nome do aluno %d: ", x + 1);
            fgets(a[x].nome, sizeof(a[x].nome), stdin);
            a[x].nome[strcspn(a[x].nome, "\n")] = '\0';
    
            printf("Informe o número de matrícula do aluno %d: ", x + 1);
            fgets(a[x].matricula, sizeof(a[x].matricula), stdin);
            a[x].matricula[strcspn(a[x].matricula, "\n")] = '\0'; 
    
            float soma = 0;
            for (y = 0; y < 3; y++) {
                printf("Informe a nota %d: ", y + 1);
                scanf("%f", &a[x].notas[y]);  
                soma += a[x].notas[y];       
            }
            getchar(); 
    
            media = soma / 3;
            if (media > maior) {
                maior = media;
                aluno_maiorm = a[x];
            }
        }
    
        printf("\nAluno com maior média:\n");
        printf("Nome: %s\n", aluno_maiorm.nome);
        printf("Matrícula: %s\n", aluno_maiorm.matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", aluno_maiorm.notas[0], aluno_maiorm.notas[1], aluno_maiorm.notas[2]);
        printf("Média: %.2f\n", maior);
    
        return 0;
    }

## Exercício 3: 
    #include <stdio.h>

    enum DiasSemana {Domingo = 1,Segunda, Terca, Quarta, Quinta, Sexta, Sabado};
    
    int main() {
        int dia;
    
        printf("Digite um número (1 a 7) para o dia da semana: ");
        scanf("%d", &dia);
    
        if (dia < 1 || dia > 7) {
            printf("Número inválido! Insira um valor entre 1 e 7.\n");
            return 1;
        }
    
        printf("O dia correspondente é: ");
        switch (dia) {
            case Domingo:
                printf("Domingo\n");
                break;
            case Segunda:
                printf("Segunda-feira\n");
                break;
            case Terca:
                printf("Terça-feira\n");
                break;
            case Quarta:
                printf("Quarta-feira\n");
                break;
            case Quinta:
                printf("Quinta-feira\n");
                break;
            case Sexta:
                printf("Sexta-feira\n");
                break;
            case Sabado:
                printf("Sábado\n");
                break;
        }
    
        return 0;
    }

## Exerício 4: 

    #include <stdio.h>
    #include <string.h> 
    
    union dados {
        int idade;
        char nome[40];
    };
    
    int main() {
        union dados d;
    
        d.idade = 24;
        printf("Valor armazenado como inteiro: %d\n", d.idade);
        printf("Valor interpretado como string: %s\n", d.nome);
    
        strcpy(d.nome, "Gabriel"); 
        printf("Valor armazenado como string: %s\n", d.nome);
        printf("Valor interpretado como inteiro: %d\n", d.idade);
    
        return 0;
    }
