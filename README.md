DOCUMENTAÇÃO DO PROJETO
SISTEMA DE CADASTRO E PEDIDO EM LINGUAGEM C COM ARMAZENAMENTO EM ARQUIVO TEXTO
Aluno: Thiago Augusto Pereira da Silva
Disciplina: Lógica Matemática
________________________________________
1. INTRODUÇÃO
Com o avanço da tecnologia, sistemas de cadastro e gerenciamento de pedidos passaram a ser amplamente utilizados para organizar informações e facilitar processos de atendimento.
Pensando nisso, este projeto apresenta o desenvolvimento de um sistema simples em linguagem C capaz de realizar cadastro de clientes, registro de pedidos e armazenamento permanente dos dados utilizando arquivos texto.
O sistema foi desenvolvido utilizando conceitos fundamentais de programação, manipulação de arquivos e organização por funções.
________________________________________
2. OBJETIVO
Objetivo Geral
Desenvolver um sistema em linguagem C para realizar cadastro de clientes e gerenciamento de pedidos utilizando armazenamento em arquivos texto.
Objetivos Específicos
•	Cadastrar clientes;
•	Exibir clientes cadastrados;
•	Registrar pedidos;
•	Listar pedidos realizados;
•	Salvar dados em arquivos texto;
•	Recuperar informações armazenadas;
•	Permitir limpeza controlada dos dados;
•	Organizar o código utilizando funções.
________________________________________
3. DESCRIÇÃO DO SISTEMA
O sistema funciona por meio de um menu interativo executado no terminal.
O usuário pode escolher diferentes funcionalidades para realizar operações relacionadas ao cadastro e gerenciamento de pedidos.
As informações inseridas são armazenadas em arquivos texto para garantir persistência dos dados mesmo após o encerramento do programa.
Arquivos utilizados:
clientes.txt → armazenamento dos clientes cadastrados.
pedidos.txt → armazenamento dos pedidos registrados.
________________________________________
4. FUNCIONALIDADES IMPLEMENTADAS
O sistema possui as seguintes funcionalidades:
•	Cadastro de clientes;
•	Listagem de clientes;
•	Registro de pedidos;
•	Listagem de pedidos;
•	Contagem automática de registros;
•	Armazenamento em arquivo texto;
•	Leitura de dados salvos;
•	Exclusão de dados com confirmação.
________________________________________
5. REQUISITOS FUNCIONAIS (RF)
RF01 — Permitir cadastro de clientes.
RF02 — Exibir clientes cadastrados.
RF03 — Registrar pedidos.
RF04 — Exibir pedidos registrados.
RF05 — Salvar dados automaticamente.
RF06 — Recuperar informações armazenadas.
RF07 — Apagar registros mediante confirmação.
RF08 — Exibir quantidade total de clientes e pedidos.
________________________________________
6. REQUISITOS NÃO FUNCIONAIS (RNF)
RNF01 — O sistema deve ser desenvolvido em linguagem C.
RNF02 — A interface deve funcionar em terminal.
RNF03 — O armazenamento deve ocorrer por arquivo texto.
RNF04 — O código deve possuir organização por funções.
RNF05 — O sistema deve apresentar execução simples e objetiva.
RNF06 — O sistema deve permitir manutenção e expansão.
________________________________________
7. HISTÓRIAS DE USUÁRIO
HU01
Como usuário,
quero cadastrar clientes,
para manter os dados organizados.
________________________________________
HU02
Como usuário,
quero registrar pedidos,
para controlar solicitações realizadas.
________________________________________
HU03
Como usuário,
quero visualizar registros,
para acompanhar informações armazenadas.
________________________________________
HU04
Como usuário,
quero apagar dados quando necessário,
para reiniciar o sistema.
________________________________________
8. MÉTRICAS
Para avaliar o funcionamento do sistema foram definidas as seguintes métricas:
•	Quantidade de clientes cadastrados;
•	Quantidade de pedidos registrados;
•	Tempo médio para cadastro;
•	Taxa de leitura correta dos arquivos;
•	Funcionamento sem erros;
•	Persistência dos dados após reinicialização.
________________________________________
9. TECNOLOGIAS UTILIZADAS
Linguagem utilizada:
•	Linguagem C
Bibliotecas:
•	stdio.h
•	stdlib.h
Recursos:
•	Manipulação de arquivos
•	Estrutura de repetição
•	Estrutura de decisão
•	Funções
________________________________________
10. ESTRUTURA DO PROJETO
Projeto/
main.c
clientes.txt
pedidos.txt
________________________________________
11. FLUXO DE FUNCIONAMENTO
Início do Sistema
↓
Exibição do Menu
↓
Escolha da Opção
↓
Execução da Função
↓
Leitura ou Escrita no Arquivo
↓
Exibição do Resultado
↓
Retorno ao Menu
________________________________________
12. CONCLUSÃO
O desenvolvimento do Sistema de Cadastro e Pedido permitiu aplicar conceitos fundamentais da programação em linguagem C, especialmente relacionados à manipulação de arquivos, utilização de funções e organização lógica do código.
O projeto demonstra como soluções simples podem ser utilizadas para armazenar informações e automatizar processos de cadastro e gerenciamento de pedidos utilizando recursos básicos da linguagem.


