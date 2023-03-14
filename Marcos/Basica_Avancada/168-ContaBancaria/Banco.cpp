//Na fun��o main() iremos instanciar objetos
//desta forma ela precisa incluir as declara��es da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	//Criamos um  objeto ContaCliente01 do tipo Conta
	//Est� alocado na Stack
	Conta Cliente00;
	//como est� desta forma o objeto seria criado com o construtor autom�tico
	//conhecido por construtor Padr�o ou Default
	Conta ContaCliente01("Itau", 2222, 5555, "Marcos", 100000);
	//Agora vai funcionar... Pois temos os argumentos para o construtor
	 //Criamos um  objeto ContaCliente02 do tipo Conta
	//Est� alocado na Stack
	Conta ContaCliente02;
	//Erro desaparece pois agora tem o contrutor vazio, padr�o, default

	//Os objetos foram criados(instanciados) e colocados na mem�ria RAM
	//Abaixo o debug mostra estes objetos e os valores atuais dos atributos(das vari�veis) deles

	std::cout << "Endereco Memoria Objeto ContaCliente01: " << &ContaCliente01 << "\n";
	ContaCliente01.GetEnderecoThis();
	std::cout << "Endereco Memoria Objeto ContaCliente02: " << &ContaCliente02 << "\n";
	ContaCliente02.GetEnderecoThis();


	ContaCliente01.SetBanco("Bradesco");
	//A string "Bradesco" foi enviada como par�metro para fun��o SetBanco
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco Do Brasil");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");

	//o objeto ContaCliente02 s�r� enviado como argumento para a fun��o transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


	system("PAUSE");
	return 0;
}


// debugou com o watch e acompanhou os endere�os na mem�ria das vari�veis 
// e os valores atuais dos atributos(das vari�veis) deles