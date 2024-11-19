#include <stdio.h>
#include <string.h>

float calcular_media(float nota1, float nota2, float nota3) { 
    return (nota1 + nota2 + nota3) / 3;
}

int main()
{
    int x, y, media_acima7 = 0; 
    char nomes[5][50]; 
    float notas[5][3], medias[5];
    
    for (x = 0; x < 5; x++){
        printf("Digite o nome do aluno %d: ", x + 1); 
        fgets(nomes[x], sizeof(nomes[x]), stdin);
        
        nomes[x][strcspn(nomes[x], "\n")] = '\0';
        
        for (y = 0; y <3; y++){
           printf("Digite a nota %d: ", y + 1);
           scanf("%f", &notas[x][y]);
        }
        
        medias[x] = calcular_media(notas[x][0], notas[x][1], notas[x][2]);
        
        if (medias[x] > 7) {
            media_acima7++;
        }
        
        while (getchar() != '\n');
    }
    
    for (x = 0; x < 5; x++){
        printf("Aluno %d: %s\n", x + 1, nomes[x]);
        printf("Notas: %.2f, %.2f, %.2f\n", notas[x][0], notas[x][1], notas[x][2]);
        printf("Média: %.2f\n", medias[x]);
        printf("\n");
    }

    printf("Quantidade de alunos com média acima de 7: %d\n", media_acima7);
    
    return 0;
}
