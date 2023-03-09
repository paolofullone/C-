/*Neste exemplo o ideal � mudarmos mesmo os tipos para o que espera as fun��es pow e sqrt
Converter de  float para int � tentar colocar algo maior em algo menor.
Logo teremos perda de informa��o pois float � maior e tem n�meros funcion�rios.
J� int � inteiro logo haver� perda nesta convers�o..
Por isso, neste caso o ideal � que as fun��es potencia e Raiz Quadrada
tenham retorno iguais aos das fun��es pow e sqrt respectivamente que � double.
Al�m disso temos que trocar os valores que mostrei na aula de int por float nos tipos dos par�metros
destas fun��es para evitar perda de dados */
#include <iostream>
//PROT�TIPOS DAS FUNCOES
float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);
double Potencia(float num1, float num2);
double RaizQuadrada(float num);

// Coer��o - quando o pr�prio compilador faz uma convers�o de tipos, sem declararmos entre ( ), por exemplo uma fun��o tipada com float pode retornar um int.
// char 


int main()
{
	//aqui declare como float
	float Num1, Num2;

	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Num1;

	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Num2;

	std::cout << "\n*** Resultado das operacoes***\n";
	std::cout << Num1 << " e " << Num2 << "\n";
	std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
	std::cout << "Substracao: " << Subtracao(Num1, Num2) << "\n";
	std::cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << "\n";
	std::cout << "Divisao: " << Divisao(Num1, Num2) << "\n";
	std::cout << "Potencia: " << Potencia(Num1, Num2) << "\n";
	std::cout << "Raiz Quadrada Numero1:" << RaizQuadrada(Num1) << "\n";
	std::cout << "Raiz Quadrada Numero2:" << RaizQuadrada(Num2) << "\n";

	system("PAUSE");
	return 0;
}

float Soma(float num1, float num2)
{
	return num1 + num2;
}

float Subtracao(float num1, float num2)
{
	return num1 - num2;
}

float Multiplicacao(float num1, float num2)
{
	return num1 * num2;
}

float Divisao(float num1, float num2)
{
	return num1 / num2;
}

// se recebesse inteiro e quisesse retornar float, esse � um cast. 
// Na fun��o acima, o retorno � float, se retornar um inteiro, o pr�prio compilador faz a convers�o pra int, � uma coer��o.
//float DivisaoInteira(int num1, int num2)
//{
//	return (float)num1 / (float)num2;
//}

double Potencia(float num1, float num2)
{
	return pow(num1, num2);
}

double RaizQuadrada(float num)
{
	return sqrt(num);
}