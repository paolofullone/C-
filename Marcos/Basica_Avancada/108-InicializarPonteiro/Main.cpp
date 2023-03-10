#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//ent�o para declarar uma vari�vel que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da vari�vel>
	int* ptr{ nullptr }; // apontando para o endere�o 0, que � mais seguro que n�o apontar para lugar nenhum.
	//obs: a posi��o do asterisco neste caso n�o importa
	//int* ptr; //d� no mesmo!

	std::cout << "Endere�o de ptr apontando para nullptr: " << &ptr << std::endl;
	std::cout << "Valor de ptr: " << ptr << "\n";

	int Numero = 101;
	//Aqui vamos colocar na tela o endere�o de mem�ria
	//da vari�vel N�mero. Ou seja onde ela est� carregada na mem�ria RAM. Lembre-se que o que vai para tela � o primeiro endere�o da vari�vel n�mero
	//pois ela ocupa 4 endere�os pois tem 4 bytes de tamanho

	// para colocar algo dentro da vari�vel ponteiro
	Numero = 102;
	ptr = &Numero; //aqui estamos colocando o endere�o de mem�ria da vari�vel N�mero dentro da vari�vel ponteiro
	std::cout << "\nEndere�o de ptr apontando para N�mero, sendo que N�mero recebeu o valor 102: " << &ptr << std::endl;
	std::cout << "Valor de ptr: " << ptr << std::endl;

	std::cout << "Endere�o de N�mero: " << &Numero;
	std::cout << "\nValor de N�mero: " << Numero << "\n";


	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro
	//ou seja qual lugar da RAM ele est� alocado?
	//veja n�s ainda n�o estamos colocando na tela nada que esteja dentro das vari�veis.
	//pois para colocar o que est� dentro das vari�veis
	//n�s usamos apenas o nome da vari�vel!
	//exemplo std::cout << Numero
	//std::cout << ptr

	std::cout << "\nEndere�o de ptr: " << &ptr << "\n";

	system("PAUSE");
	return 0;
}