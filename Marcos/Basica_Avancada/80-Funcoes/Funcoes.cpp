#include <iostream>

// O que a fun��o vai retornar?
//tipo de retorno da fun��o
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}
int main()
{
	int Numero, NumeroASerSomado;
	std::cout << "Digite um numero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma deste numero: " << Numero << " Com o Numero: " << NumeroASerSomado << " Sera: " << SomaAUmNumero(Numero, NumeroASerSomado);
	std::cout << std::endl;
	system("PAUSE");
	return 0;
}