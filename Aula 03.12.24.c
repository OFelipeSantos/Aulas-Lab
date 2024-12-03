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
