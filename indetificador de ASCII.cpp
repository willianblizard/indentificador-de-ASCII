#include <stdio.h>

#include <ctype.h>

#include <conio.h>

#include <windows.h>

int main()

{

void ASCII ();

void MostaCaracter();

char letra;

char Ch;

while(1)

{

puts("1 - Descobrir o codigo ASCII da tecla pressionada;");

puts("2 - Descobrir o caracter correspondente do codigo ASCII digitado.");

puts("3 - Sair do programa.");

switch(getchar())

{

case '1':fflush(stdin);system("cls");

ASCII ();

break;

case '2':fflush(stdin);system("cls");

MostaCaracter();

break;

case '3': return 0;

}

}

}

void MostaCaracter(){

char letra;

puts("Digite o codigo ASCII:");

scanf("%d",&letra);fflush(stdin);

system("cls");

if(!isprint(letra))

{

puts("Esse caracter não pode ser impresso na tela.");

}

else

printf("O codigo %d corresponde ao caracter %c.\n",letra,letra);

Sleep(1800);

system("cls");

}

void ASCII ()

{

printf("Digite uma tecla:");

char Ch;

Ch=getchar();fflush(stdin);

printf ("O Codigo em ASCII Desta Letra E: %d",Ch);

Sleep(1800);

system("cls");

}
