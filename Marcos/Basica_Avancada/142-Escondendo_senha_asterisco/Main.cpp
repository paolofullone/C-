#include <iostream>
#include <string>
#include <windows.h>  //� o arquivo de include mais famoso da chamada API do windows

using namespace std;

int main()
{
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	//FICAR� EM LOOP MONITORANDO A TECLA QUE EST� SENDO PRESSIONADA PELO USU�RIO. O LOOP SER� ENCERRADO QUANDO O USU�RIO PRESSIONAR ENTER. ISSO � VERIFICADO PELA CONDI��O !GetAsyncKeyState(VK_RETURN) & 1

	while (!GetAsyncKeyState(VK_RETURN) & 1)
	{
		//PARA i DE 48 AT� 90 FA�A
		for (int i = 0x30; i < 0x5A; i++)
		{
			if (GetAsyncKeyState(i) & 1)
			{
				//SE I ESTIVER ENTRE 65 E 90 SIGNIFICA QUE I � UMA LETRA MAI�SCULA DE ACORDO COM A TABELA ASCII
			  // ENT�O SE AS LETRAS FOREM MA�SCULAS ENTRE 65(0X41) E 90(0X5A) E(and) SE AS TECLAS CAPSLOCK OU(OR) SHIFT ESTIVEREM PRESSIONADAS COLOQUE NA VARI�VEL senha digitada letras min�sculas.Sen�o as letras j� s�o min�sculas.
				if (i >= 0x41 && i <= 0x5A && ((GetKeyState(VK_CAPITAL) & 1) == 0 || GetAsyncKeyState(VK_SHIFT) & 1))
					SenhaDigitada += ((char)i + 32);
				else
					SenhaDigitada += (char)i;

				cout << "*";
				Sleep(50);
			}

			//CASO A TECLA PRESSSIONADA SEJA BACKSPACE SER� EXCLU�DO DA STRING SenhaDigitada um caractere
			else if (GetAsyncKeyState(VK_BACK) & 1)
			{
				SenhaDigitada.erase(SenhaDigitada.size() - 1);
				system("cls");
				for (int i = 0; i < SenhaDigitada.size(); i++)
				{
					cout << '*';
				}
				Sleep(50);
			}
		}
	}

	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//atrav�s de outra vari�vel booleana bAcesso
		bAcesso = true;
		system("PAUSE");
	}
	/*Se a condi��o for falsa ent�o as isntru��es do else ser�o executadas*/
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, for�a o fechamento da aplica��o
	}
	Sleep(10000);
	return 0;
}