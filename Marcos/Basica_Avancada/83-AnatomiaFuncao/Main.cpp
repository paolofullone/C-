#include <iostream>
/*Crie uma fun��o que indique se um n�mero � par ou impar. Receba n�mero do usu�rio e exiba na tela o n�mero recebido e se ele � par ou impar.
*/
//Prot�tipo da fun��o
bool isPar(int num);

int main()
{
	int Numero;
	std::cout << "\nDigite um numero inteiro: ";
	std::cin >> Numero;
	//se o retorno da fun��o for true significa que  a condi��o do if ser� verdadeira e entra no texto PAR
	//por�m n�o � necess�rio esta compara��o == true
	//aqui ap�s executar a fun��o ser�
	//if (true) ou if(false) e funciona da mesma forma
	//Profissionalmente s� se utiliza assim
	if (isPar(Numero))
	{
		std::cout << "\nNumero: " << Numero << " PAR\n";
	}
	//Sen�o for PAR j� sabemos que � IMPAR
	//podemos otimizar isso.
	// if tamb�m n�o precisa pois else j� sabemos que � par
	else
	{
		std::cout << "\nNumero: " << Numero << " IMPAR\n";
	}
	system("PAUSE");
	return 0;
}

bool isPar(int num)
{
	//se o resto da divis�o de um numero for zero
	//numero � par logo retorne true(verdadeiro)
	//se n�o retorne false idicando que ele � false
	if (num % 2 == 0)
		return true;
	//Observe que return faz a saida imediata da fun��o
	//Logo se for par o c�digo abaixo jamais ser� executado. Assim o else � desnecessario
	return false;
}