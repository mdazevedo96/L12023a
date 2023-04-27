#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool valida_num(int num){
    if(num == -1){
        printf("Numero invalido");
        return false;
    }
}

int calcula(int x,char op){
    int r=0;
    if(op == '+'){
        return r+=x;
    } else if(op == '-'){
        return r-=x;
    } else if (op == '*'){
        return r*=x;
    } else if (op == '/'){
        return r/=x;
    }
}

int main(){
    bool continua = true;
    int num = 0;
    char op;
    int resultado=0;
    printf("Digite operacao (x op y):");
    while (op != '\n'){
        scanf("%d", &num);
        scanf("%c", &op);
        resultado = calcula(num, op);
    }
        printf("%d", resultado);

}

