#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num01, num02, num03, result;
	char Resposta;

	do {
		std::cout << "Digite os tr�s numeros separados por espa�o" << std::endl;
		std::cin >> num01 >> num02 >> num03;
		result = (num01 + num02 + num03) / 3;
		std::cout << "Os n�meros digitados foram: " << num01 << ", " << num02 << ", " << num03 << std::endl;
		std::cout << "A media aritmetica dos numeros �: " << result << std::endl;

		std::cout << "\nDeseja calcular outra M�dia Artm�tica? (Responda S para Sim e N para n�o:) ";
		std::cin >> Resposta;

	} while (Resposta == 's' || Resposta == 'S');

	std::cout << "\nSaindo do programa...\n";
	system("pause");
	return 0;
}