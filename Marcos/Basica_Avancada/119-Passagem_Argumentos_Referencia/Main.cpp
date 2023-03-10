#include <iostream>

//Agora estamos indicando que a fun��o ter� dois par�metros que ser�o
//refer�ncias dos argumentos passados para esta fun��o
//Ou seja o que for enviado para esta fun��o passar� a ser referenciado por Num1 e Num2 respectivamente.
void TrocaNumeros(int& Num1, int& Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro N�mero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo N�mero: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	TrocaNumeros(Numero1, Numero2);

	std::cout << "\nValores depois da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";

	std::cout << "\nEndere�o de mem�ria de Numero1 = " << &Numero1;
	std::cout << "\nEndere�o de mem�ria de Numero2 = " << &Numero2 << "\n";

	system("PAUSE");
	return 0;
}

//Agora Num1 e Num2 n�o recebem simplesmente uma c�pia do valor de Numero1 e Numero2. Eles passam a ser Refer�ncias de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor isso ir� afetar as vari�veis, pois agora eles s�o refer�ncias!
void TrocaNumeros(int& Num1, int& Num2)
{
	std::cout << "\nEndere�o de mem�ria de Num1 da fun��o TrocaNumeros = " << &Num1;
	std::cout << "\nEndere�o de mem�ria de Num2 da fun��o TrocaNumeros = " << &Num2;
	int Temp{ Num1 };
	//Num1 passa a ser 20
	//aqui est� copiando em Numero1 o valor de Numero2 pois s�o refer�ncias � como se fosse Numero1 = Numero2
	//Lembre que refer�ncias s�o alias para suas vari�veis
	//Isso aqui (int& Num1, int& Num2) � o mesmo que
	//int& Num1 = Numero1 e int& Num1 = Numero2;
	//s� que isso ocorre na chamada da fun��o.
	//ISSO DAMOS O NOME DE PASSAGEM DE ARGUMENTOS PARA A FUN��O POR REFER�NCIA!
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	//Por�m....
	Num2 = Temp;

}