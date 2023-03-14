#include <iostream>
struct Data // se alterar para class, d� erro na main, pois a classe por padr�o � privada e a struct por padr�o � p�blica.
{
	//Como n�o espefiquei o modificador de acesso
	// na struct ele ser� por padr�o public:
	int Dia;
	int Mes;
	int Ano;
	Data() : Dia(10), Mes(8), Ano(2023) {}
};

//desta forma acima voc� pode iniciar os valores ao instanciar e usar chaves

int main()
{
	Data Agenda; /* Voc� pode tamb�m inicializar uma struct desta forma:  Data Agenda = {22, 07, 2013};*/
	// Agenda.Dia = 22; poderia inicializar aqui dia mes e ano, ou da forma como fizemos na struct Data
	//desta forma voc� tem acesso aos atributos, as vari�veis da struct diretamente
	//no c�digo da fun��o main.. Ou seja fora do c�digo da struct
	std::cout << "Dia: " << Agenda.Dia << " Mes: " << Agenda.Mes << " Ano: " << Agenda.Ano << "\n";
	system("PAUSE");
	return 0;
}