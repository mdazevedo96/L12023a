#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int calcula(int x,char op, int y){
    if(op == '+'){
/// a função deve ser conhecida pelo compilador antes da chamada.
/// tem 2 formas de se fazer isso, uma é colocar a função antes 
///   da primeira função que chama ela, outra é colocar só
///   a declaração da função (até o ')' e um ';' depois) antes
///   da função que chama.
        return soma(x, y);
    } else if(op == '-'){
        return subtracao(x, y);
    } else if (op == '*'){
        return multiplicacao(x, y);
    } else if (op == '/'){
        return divisao(x, y);
    } else {
/// a descrição pedia para imprimir o resultado até o problema
        printf("Operacao invalida");
        exit(-1);
    }
}

int soma(int x, int y){
    return x+y;
}

int subtracao(int x, int y){
    return x-y;
}

int multiplicacao(int x, int y){
    return x*y;
}

int divisao(int x, int y){
    if(y == 0){
        printf("Divisao impossível");
/// esta função retorna um int. visto como int, NULL tem o valor 0.
        return NULL;
    }else{
        return x/y;

    }

}

int main(){
    bool continua = true;
    int num1, num2=0;
    char op = NULL;
    int resultado=0;
    while (continua){
/// na primeira vez, a variável 'op' não está inicializada, pode ter qualquer valor
        if(op !='\n'){
            printf("Digite operacao (x op y): (Digite ENTER para sair)");
/// não é bem isso que é pedido, é para operar sobre o resultado anterior.
/// se for digitado "10+2*3" deve dar 36.
            scanf("%d %c %d", &num1, &op, &num2);
            resultado+= calcula(num1, op, num2);
                continua = false;
            }
            printf("%d", resultado);
        }
    }
