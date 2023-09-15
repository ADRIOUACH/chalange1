#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,res;
    int op;
    printf("entre une valeur x:");
    scanf("%f",&x);
    printf("entre une valeur y");
    scanf("%f",&y);
    printf("op: +1,-2,*3,/");
    scanf("%d",&op);
    switch(op){
    case 1 :
        res = x + y;
        printf("%f,",res);
        break;
    case 2 :
        res = x - y;
        printf("%f,",res);
        break;
    case 3 :
        res = x * y;
       printf("%f,",res);
    case 4 :
        res = x / y;
        printf("%f,",res);
        break;
    default : printf(" ce nombr inpossible");

    }
    return 0;
}
