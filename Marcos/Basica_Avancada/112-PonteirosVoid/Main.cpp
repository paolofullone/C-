#include <iostream>

int main()
{
	int Numero{ 4890 };
	char Letra{ 'E' };
	//declarei ponteiro gen�rico ou vazio(void)
	//significa que ele n�o tem ainda um tipo que possa apontar
	//isso � �til quando voc� por exemplo retornar algo de alguma fun��o e atribuir a um ponteiro. Neste caso voc� n�o sabe de antem�o que tipo de dado voc� vai retornar e assim depois voc� pode especificar qual tipo de dado o ponteiro void* passar� a apontar
	void* ptrG;
	//Agora ptrG passa a apontar para a a vari�vel Letra
	//Pois ele recebeu o endere�o de mem�ria desta vari�vel
	ptrG = &Letra;
	// std::cout << "Valor de Letra via ptrG = " << *ptrG << "\n"; //por que deu erro?
	//Lembre que o endere�o de uma vari�vel � apenas o primeiro byte dela. O primeiro endere�o em que ela esta carregada.
	//Assim como o compilador vai saber como LER a vari�vel
	// ex:  a partir do endere�o 105 eu devo percorrer quanto bytes?
	// Ele s� saber� isso quando voc� indicar o tipo do ponteiro ptrG
	//Por enquanto ele � void!
	//logo j� que Letra � do tipo char vo� deve
	//indicar que o ponteiro ptrG est� apontando para um char
	//isso � feito via cast
	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n";
	//primeiro voc� faz o cast e depois coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//agora o compilador sabe que dever� ler 1(byte) para colocar um char na tela!
	ptrG = &Numero;
	std::cout << "\nValor de Numerom via ptrG: " << *(int*)ptrG << "\n";

	system("PAUSE");
	return 0;
}