## Exercício: 
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  
  struct produto {
      char codigo[10];
      char desc[200];
      float preco;
  };
  
  int main() {
      struct produto p[10];
      int x;
  
      for (x = 0; x < 10; x++){
          printf("Informe o código do produto %d: ", x+1);
          fgets(p[x].codigo, sizeof(p[x].codigo), stdin);
          p[x].codigo[strcspn(p[x].codigo, "\n")] = '\0';
          
          printf("Informe a descrição do produto %d: ", x+1);
          fgets(p[x].desc, sizeof(p[x].desc), stdin); 
          p[x].desc[strcspn(p[x].desc, "\n")] = '\0'; 
          
          printf("Informe o preço de custo do produto %d: ", x+1); 
          scanf("%f", &p[x].preco); 
          getchar();
          
          printf("\n");
      }
  
      for (x = 0; x < 10; x++) {
          printf("Informações do Produto %d:\n", x+1);
          printf("Código: %s\n", p[x].codigo);
          printf("Descrição: %s\n", p[x].desc);
          printf("Preço de custo: %.2f\n", p[x].preco);
      }
      
      return 0;
  }
  
  
  

