#include<stdio.h>
#include "max.h"
int main(){
    int a,b;
    printf("Inserisci due numeri: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Il maggiore tra i due e': %d ",max(a,b));
}