#include <iostream>
// A diretiva #include � usada para incluir arquivos de cabe�alho iostream em um programa C ++.
// ctrl + enter no iostream mostra o c�digo

int main()
// fun��o principal do programa
{
	std::cout << "Paolo Enrico Iacono Fullone - 44 anos" << std::endl;
	// cout � o comando de sa�da de dados, neste caso est� solicitando para imprimir na tela o texto entre aspas duplas
	// endl � o comando de quebra de linha
	std::cout << "Frase Preferida: Seja voc� quem for, seja qual for a posi��o social que voc� tenha na vida, a mais alta ou a mais baixa, tenha sempre como meta muita for�a, muita determina��o e sempre fa�a tudo com muito amor e com muita f� em Deus, que um dia voc� chega l�. De alguma maneira voc� chega l�." << std::endl;
	system("color 0B");
	system("PAUSE");
	// chama o shell do windows e coloca o comando pause, funciona mai�scula e min�scula nesse config.
	return 0;
	// return 0 � o comando de retorno da fun��o principal para indicar que o programa foi executado com sucesso
}


// ctrl + shift + b - compila
// ctrl + F5 - executa
// ctrl + shift + enter - maximias e minimiza janela de c�digo
