#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	bool bAchou;

	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;

	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;

	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;

	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;

	std::cout << "\"Qualquer coisa que n�o seja 0 � true:\"" << std::endl;
	bAchou = "Qq Coisa que n�o seja 0 � true";
	std::cout << "Valor de bAchou: " << bAchou << "\n" << std::endl;


	std::cout << "1 � true, 0 � false. Qualquer outro valor � true." << std::endl;

	system("Pause");
	return 0;
}