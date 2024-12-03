Exercício 1: 
  #include <stdio.h>
  #include <string.h> 
  
  struct estudante {
      char nome[50];
      int idade;
      float nota;
  };
  
  void inserirDados(struct estudante *e) {
      printf("Insira o nome do estudante: ");
      fgets(e->nome, sizeof(e->nome), stdin); 
      printf("Insira a idade do estudante: ");
      scanf("%d", &e->idade);
      printf("Insira a nota do estudante: ");
      scanf("%f", &e->nota);
      getchar(); 
  }
  
  void atualizarNota(struct estudante *e, float novaNota) {
      e->nota = novaNota;
      printf("Nota atualizada para %.2f.\n", e->nota);
  }
  
  void mostrarDados(struct estudante *e) {
      printf("\nDados do Estudante:\n");
      printf("    Nome: %s", e->nome);
      printf("    Idade: %d\n", e->idade);
      printf("    Nota: %.2f\n", e->nota);
  }
  
  int main() {
      struct estudante e;
      float novaNota;
      char resposta[4];
  
      inserirDados(&e);
      mostrarDados(&e);
  
      printf("\nGostaria de atualizar a nota do estudante? (Digite sim para confirmar): ");
      fgets(resposta, sizeof(resposta), stdin);
      resposta[strcspn(resposta, "\n")] = 0; 
  
      if (strcmp(resposta, "sim") == 0 || strcmp(resposta, "Sim") == 0) {
          printf("\nInsira a nova nota para o estudante: ");
          scanf("%f", &novaNota);
          atualizarNota(&e, novaNota);
      }
  
      mostrarDados(&e);
  
      return 0;
  }

Exercício 2: 

#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[50];
    char matricula[20];
    char dataNascimento[12];
    float notas[4]; 
    float media;
};

int main() {
    int x, y, z;
    float soma;

    printf("Informe o número de turmas: ");
    scanf("%d", &x);
    printf("Informe o número de alunos por turma: ");
    scanf("%d", &y);
    printf("Informe o número de disciplinas: ");
    scanf("%d", &z);
    getchar(); 

    struct aluno a[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("\nInsira os dados do aluno [%d][%d]:\n", i + 1, j + 1);
            printf("Nome: ");
            fgets(a[i][j].nome, sizeof(a[i][j].nome), stdin);
            a[i][j].nome[strcspn(a[i][j].nome, "\n")] = 0; 

            printf("Matricula: ");
            fgets(a[i][j].matricula, sizeof(a[i][j].matricula), stdin);
            a[i][j].matricula[strcspn(a[i][j].matricula, "\n")] = 0;

            printf("Data de nascimento (DD/MM/AAAA): ");
            fgets(a[i][j].dataNascimento, sizeof(a[i][j].dataNascimento), stdin);
            a[i][j].dataNascimento[strcspn(a[i][j].dataNascimento, "\n")] = 0;

            float somaNotas = 0;
            printf("Insira as notas (%d disciplinas):\n", z);
            for (int k = 0; k < z; k++) {
                printf("Nota %d: ", k + 1);
                scanf("%f", &a[i][j].notas[k]);
                getchar(); 
                somaNotas += a[i][j].notas[k];
            }

            a[i][j].media = somaNotas / z;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("\nDados do aluno [%d][%d]:\n", i + 1, j + 1);
            printf("    Nome: %s\n", a[i][j].nome);
            printf("    Matricula: %s\n", a[i][j].matricula);
            printf("    Data de Nascimento: %s\n", a[i][j].dataNascimento);

            printf("    Notas: ");
            for (int k = 0; k < z; k++) {
                printf("%.2f ", a[i][j].notas[k]);
            }
            printf("\n  Media: %.2f\n", a[i][j].media);

            if (a[i][j].media >= 7.0) {
                printf("    Status: APROVADO\n");
            } else {
                printf("    Status: REPROVADO\n");
            }
        }
    }

    return 0;
}
