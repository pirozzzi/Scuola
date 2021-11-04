#include<stdio.h>

int main(){
    int a,b,n;
    printf("Inserisci due numeri: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Digitare 0 per conoscere il maggiore, altrimenti digitare un altro numero ");
    scanf("%d",&n);
    if(n==0)
    printf("Il maggiore e': %d ",max(a,b));
    else
    printf("Il minimo e': %d ",min(a,b));
}