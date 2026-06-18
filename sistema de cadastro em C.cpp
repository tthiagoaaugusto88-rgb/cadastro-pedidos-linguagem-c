#include <stdio.h>

int contadorPedidos = 1;


void cadastrarCliente(){

FILE *arquivo;

arquivo = fopen("clientes.txt","a");

if(arquivo==NULL){

printf("\nErro ao abrir arquivo!\n");

return;

}

char nome[100];

printf("\nDigite o nome do cliente: ");

scanf(" %[^\n]",nome);

fprintf(arquivo,"%s\n",nome);

fclose(arquivo);

printf("\nCliente cadastrado com sucesso!\n");

}


void listarClientes(){

FILE *arquivo;

arquivo=fopen("clientes.txt","r");

if(arquivo==NULL){

printf("\nNenhum cliente encontrado.\n");

return;

}

char nome[100];

int total=0;

printf("\n===== CLIENTES =====\n\n");

while(fgets(nome,100,arquivo)!=NULL){

total++;

printf("%d - %s",total,nome);

}

printf("\nTotal: %d clientes\n",total);

fclose(arquivo);

}


void registrarPedido(){

FILE *arquivo;

arquivo=fopen("pedidos.txt","a");

if(arquivo==NULL){

printf("\nErro ao abrir arquivo.\n");

return;

}

char cliente[100];

char pedido[100];

printf("\nNome do cliente: ");

scanf(" %[^\n]",cliente);

printf("Pedido: ");

scanf(" %[^\n]",pedido);

fprintf(

arquivo,

"\n================\n"

"ID do Pedido: %d\n"

"Cliente: %s\n"

"Pedido: %s\n",

contadorPedidos,

cliente,

pedido

);

contadorPedidos++;

fclose(arquivo);

printf("\nPedido registrado!\n");

}


void listarPedidos(){

FILE *arquivo;

arquivo=fopen("pedidos.txt","r");

if(arquivo==NULL){

printf("\nNenhum pedido encontrado.\n");

return;

}

char linha[200];

int total=0;

printf("\n===== PEDIDOS =====\n\n");

while(fgets(linha,200,arquivo)!=NULL){

printf("%s",linha);

if(linha[0]=='P'){
total++;
}

}

printf("\nTotal de pedidos: %d\n",total);

fclose(arquivo);

}


void limparDados(){

char escolha;

printf(

"\nTem certeza que deseja apagar todos os dados? (S/N): "

);

scanf(" %c",&escolha);

if(

escolha=='S'

||

escolha=='s'

){

FILE *clientes;

FILE *pedidos;

clientes=fopen("clientes.txt","w");

pedidos=fopen("pedidos.txt","w");

fclose(clientes);

fclose(pedidos);

contadorPedidos=1;

printf("\nDados apagados!\n");

}

else{

printf("\nOperacao cancelada.\n");

}

}


int main(){

int opcao;

do{

printf("\n");

printf("========================\n");

printf(" SISTEMA DE PEDIDOS\n");

printf("========================\n");

printf("1 - Cadastrar Cliente\n");

printf("2 - Listar Clientes\n");

printf("3 - Registrar Pedido\n");

printf("4 - Listar Pedidos\n");

printf("5 - Apagar Dados\n");

printf("0 - Sair\n");

printf("\nEscolha: ");

scanf("%d",&opcao);

switch(opcao){

case 1:

cadastrarCliente();

break;

case 2:

listarClientes();

break;

case 3:

registrarPedido();

break;

case 4:

listarPedidos();

break;

case 5:

limparDados();

break;

case 0:

printf("\nEncerrando sistema...\n");

break;

default:

printf("\nOpcao invalida!\n");

}

}

while(opcao!=0);

return 0;

}