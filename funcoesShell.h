#ifndef FUNCOES_SHELL
#define FUNCOES_SHELL

#define TAMANHO_ENTRADA 512
void executarComando(char* args[], char* proximoComando, int primeiroComandoOuNao, int* fd);
void tratarEntrada(char *str);

#endif
