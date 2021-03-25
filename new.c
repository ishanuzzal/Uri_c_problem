#include <stdio.h>
int main()
{
    int y,i=0;
    float media=0,x,avg;


    while(1){
        scanf("%f",&x);
        if(x<0 || x>10.0){
            printf("nota invalida\n");
        }
        else{
            media+=x;
            i++;
        }
        if(i==2){
            avg=media/2;
            printf("media = %.2f\n",avg);
        break;
        }


    }


    return 0;
}
