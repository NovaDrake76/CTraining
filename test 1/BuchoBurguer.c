#include <stdio.h>

int main()
{
    int menu[5] = {12, 23, 31, 28, 15};
    int choice, money, result;
    scanf("%d", &choice);
    scanf("%d", &money);
    
    result = menu[choice-1] - money;
    
    if(result == 0){
        
        printf("Deu certim!");
        
    }else if(money < menu[choice-1]){
        
        printf("Saldo insuficiente! Falta %d reais", result);
        
    }else{
        printf("Troco = %d reais", result * -1);
    }
    

    return 0;
}
