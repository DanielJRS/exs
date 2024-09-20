 #include <stdio.h>
 #include <stdbool.h>

    boolePrimo(int n) {
    // Função verifica se é primo e retorna verdadeiro ou falso
        if(n<=1){
        return false;
        }

    // Se n é menor ou igual a 1, a função retorna
    // false porque números menores ou iguais a 1 não são primos.
        if(n<=3){
        return true;
        }

        // Se n é 2 ou 3, a função retorna true
        //porque 2 e 3 são números primos.
        if (n % 2 == 0 || n % 3 == 0){
        return false;
        }
        // Se n é divisível por 2 ou por 3, a função retorna false.
        // Isso porque números
        // divisíveis por 2 ou 3, que não sejam 2 ou 3, não são primos.

        int i;
        for(i = 5; i * i <= n; i++){
        //Este loop verifica se n é divisível por algum número
        //começando a partir de 5. O loop continua enquanto o
        // quadrado de i é menor ou igual a n.
            if (n % i == 0 || n % (i + 2 ) == 0) return false;
        //Se n for divisível por i ou i + 2, a função retorna false.
        //Isso é feito para checar se n é divisível por algum número.
        }
        return true; // Caso não enconte divisor o numero é primo !
    }

    // Função recursiva para encontrar o maior primo menor que m
    void maiorPrimoMenorQue(int m, int *p1){
        if (m <=2) {
            *p1 = -1; // Não há primos menores que 2
            return;
            }
            if (ePrimo(m - 1)){
            *p1 = m - 1;
            return;
            }
            maiorPrimoMenorQue(m - 1, p1);

        }
        // Função recursiva para encontrar o menor primo maior que m
        void menorPrimoMaiorQue(int m, int *p2) {
            if(ePrimo(m + 1)) {
            *p2 = m + 1;
            return;
            }
            menorPrimoMaiorQue (m + 1, p2);
        }
        // Função principal para teste
        int main(){
        int a = printf("Digite um numero: ");
        }
