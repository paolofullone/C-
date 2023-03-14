//Na fun��o main() iremos instanciar objetos
//desta forma ela precisa incluir as declara��es da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	//Criamos um  objeto ContaCliente01 do tipo Conta
	//Est� alocado na Stack
	Conta ContaCliente01;
	//Criamos um  objeto ContaCliente02 do tipo Conta
	//Est� alocado na Stack
	Conta ContaCliente02;

	ContaCliente01.SetBanco("XP");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fullone");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco XP");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Iacono");

	//o objeto ContaCliente02 s�r� enviado como argumento para a fun��o transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


	system("PAUSE");
	return 0;
}