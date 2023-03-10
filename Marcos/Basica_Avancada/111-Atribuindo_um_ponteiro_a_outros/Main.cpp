#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 4096 };
	int* ptr;
	int* ptr2;
	ptr = &Numero;
	ptr2 = ptr;
	std::cout << "\nEndere�o contido dentro de ptr: " << ptr << "\n";
	std::cout << "\nEndere�o contido dentro de ptr2: " << ptr2 << "\n";
	std::cout << "\nEndere�o de ptr na mem�ria RAM: " << &ptr << "\n";

	//Na aula esqueci de colocar & na frente de ptr2, portanto � &ptr2
	//pois voc� deseja que seja buscado o endere�o de mem�ria RAM que ptr2 esta alocado e carregado
	std::cout << "\nEndere�o de ptr2 na mem�ria RAM: " << &ptr2 << "\n";
	std::cout << "\nValor de Numero agora: " << Numero << "\n";
	*ptr2 = *ptr + 10;
	std::cout << "\nValor de Numero agora: " << Numero << "\n";
	system("PAUSE");
	return 0;
}