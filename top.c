#include<stdio.h>
#include<math.h>
int a,b;
int max(int a, int b);
int main(){
    printf("Inserisci due numeri: \n");
    scanf("%d,&a");
    scanf("%d,&b");
    printf("Il maggiore tra i due e': %d",max(a,b));

}
int max(a,b){
    if(a>b)
    return a;
    else
    return b;
}