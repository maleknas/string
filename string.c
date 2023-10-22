#include <stdio.h>
#include<string.h>
void main(){
    char h[100] ,h1[100] ,h2[100];
    //insertion du chaine h :
    printf("entrer une chaine \n");
    scanf("%s",&h);
    //insertion du chaine h2 :
    printf("entrer une chaine h2 \n");
    scanf("%s",&h2);
    //determination du taille de la chaine :
    printf("le longueur de la chaine est : %d \n", strlen(h));
    //copiage et affichage de h1 :
    printf("la deuxieme chaine est h1 : %s \n",strcpy(h1,h));
    // mixage de deux chaine :
    printf("la chaine cree est h1 : %s\n",strcat(h1,h2));
    //comparaison de deux chaine :
    switch (strcmp(h,h2)) {
        case -1 : printf("la chaine : %s < la chaine : %s",h,h2);break;
        case 0 : printf("la chaine : %s = la chaine : %s",h,h2);break;
        case 1 : printf("la chaine : %s > la chaine : %s",h,h2);break;
    }
}
