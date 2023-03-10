#include <iostream>

int ContadorChamadas()
{
	// Variavel est�tica: Significa que ap�s a sa�da da fun��o o valor desta vari�vel n�o ser� perdido.
	// static indica que este valor seja mantido mesmo ap�s a fun��o ser encerrada
	static int NumChamadasDaFuncao = 0; // se tirar o static, vai printar 1 cinco vezes, pois a vari�vel ser� criada 5 vezes
	// com o static, a vari�vel � mantida e o compilador pula a cria��o da vari�vel na linha acima quando passa no segundo la�o em diante.
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;
}

int main()
{
	// esta vari�vel i � destru�da ap�s a execu��o do la�o for, a vari�vel NumChamadasDaFuncao criada acima n�o � destru�da.
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
	}
	system("PAUSE");
	return 0;
}