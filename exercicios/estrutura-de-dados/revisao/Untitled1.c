 #include <stdio.h>
 #include <stdbool.h>

    boolePrimo(int n) {
    // Fun��o verifica se � primo e retorna verdadeiro ou falso
        if(n<=1){
        return false;
        }

    // Se n � menor ou igual a 1, a fun��o retorna
    // false porque n�meros menores ou iguais a 1 n�o s�o primos.
        if(n<=3){
        return true;
        }

        // Se n � 2 ou 3, a fun��o retorna true
        //porque 2 e 3 s�o n�meros primos.
        if (n % 2 == 0 || n % 3 == 0){
        return false;
        }
        // Se n � divis�vel por 2 ou por 3, a fun��o retorna false.
        // Isso porque n�meros
        // divis�veis por 2 ou 3, que n�o sejam 2 ou 3, n�o s�o primos.

        int i;
        for(i = 5; i * i <= n; i++){
        //Este loop verifica se n � divis�vel por algum n�mero
        //come�ando a partir de 5. O loop continua enquanto o
        // quadrado de i � menor ou igual a n.
            if (n % i == 0 || n % (i + 2 ) == 0) return false;
        //Se n for divis�vel por i ou i + 2, a fun��o retorna false.
        //Isso � feito para checar se n � divis�vel por algum n�mero.
        }
        return true; // Caso n�o enconte divisor o numero � primo !
    }

    // Fun��o recursiva para encontrar o maior primo menor que m
    void maiorPrimoMenorQue(int m, int *p1){
        if (m <=2) {
            *p1 = -1; // N�o h� primos menores que 2
            return;
            }
            if (ePrimo(m - 1)){
            *p1 = m - 1;
            return;
            }
            maiorPrimoMenorQue(m - 1, p1);

        }
        // Fun��o recursiva para encontrar o menor primo maior que m
        void menorPrimoMaiorQue(int m, int *p2) {
            if(ePrimo(m + 1)) {
            *p2 = m + 1;
            return;
            }
            menorPrimoMaiorQue (m + 1, p2);
        }
        // Fun��o principal para teste
        int main(){
        int a = printf("Digite um numero: ");
        }
