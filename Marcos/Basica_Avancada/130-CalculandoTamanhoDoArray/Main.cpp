#include <iostream>

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	// Para enviar um vetor para uma fun��o basta enviar o nome do vetor

	// sizeof devolve o n�mero em Bytes do tamanho de uma vari�vel ou tipo
	// logo sizeof(Vetor) vai devolver o numero de elementos do vetor multiplicado pelo tamanho de seu tipo
	// pois s�o gastos 4bytes por int neste vetor e como s�o 10 elementos
	// o vetor ter� tamanho 40bytes
	// Mas precisamos saber o tamanho!
	// Basta dividir pelo tipo do vetor
	int TamanhoVetor = sizeof(Vetor) / sizeof(int);
	// Agora ser�o 40 bytes / 4 bytes = 10 e teremos o tamanho do vetor!

	std::cout << "\nTamanho Vetor: " << TamanhoVetor;
	/*std::cout << "\nTamanho de um float " << sizeof(float);
	std::cout << "\nTamanho de um int " << sizeof(int);*/

	MostrarVetor(Vetor, TamanhoVetor);
	// Por�m � o tamanho?
	// D� para calcular este tamanho sem ter que enviar?

	system("PAUSE");
	return 0;
}

// Para receber um vetor basta colocar o tipo nome do vetor e [ ]
// ou j� com tamanho int Array[10]
void MostrarVetor(int Array[], int TamVetor)
{

	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
}