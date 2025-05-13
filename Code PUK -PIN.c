#include <stdio.h>
#include <string.h>
int main() {
    int a=123456;
    int b=654321;
    int c;
    int d;

    printf("Entrez le code PUK : ");
    scanf("%d", &c);
    while (c!=a){
    printf("Code PUK incorrect, veuillez réessayer");
    scanf("%d",&c);
    }
    if (c==a) {
        printf("PUK correct. Entrez le code PIN : ");
        scanf("%d", &d);
        while(d!=b){
        printf("Code PIN incorrect, veuillez saisir le bon code :");
        scanf("%d", &d);
        
        }
        if (d==b) {
            printf("Authentification réussie !\n");
        }
 
    }
    return 0;
}