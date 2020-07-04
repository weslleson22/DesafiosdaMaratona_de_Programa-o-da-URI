///////////////////////////////////////
//             DESAFIO A             //
//             Kaprekar              //
///////////////////////////////////////

#include <iostream>
 
using namespace std;

int digitos[10];

// Método que conta as ocorrencias de digitos de X
// Por exemplo, X = 1555; digitos[5] = 3; Significa que existem 3 ocorrencias em X do digito 5 
void get_digitos(int X)
{
	for (int i = 0; i < 10; i++)
	{
		digitos[i] = 0;
	}
	
	int x1, x2, x3, x4;
	
	x1 = X % 10;
	x2 = ((X - x1)/10) % 10;
	x3 = ((X - x1 - 10*x2)/100) % 10;
	x4 = ((X - x1 - 10*x2 - 100*x3)/1000) % 10;
	
	digitos[x1]++;
	digitos[x2]++;
	digitos[x3]++;
	digitos[x4]++;
	
	return;
}

// Função que calcula o maior número formados pelos digitos de X
int maior_numero_com_digitos_de(int X)
{
	get_digitos(X);
	int aux = 1000;
	int retorno = 0;
	
	for (int i = 9; i >= 0; i--)
	{
		// X pode ter mais de 1 digito, portanto o digito i precisa ser usado na
		// construção do novo número multiplas vezes
		// X = 1555, o digito 5 deve ser usado 3 vezes na contrução do novo número
		while (digitos[i] != 0)
		{
			digitos[i]--;
			retorno+= i * aux;
			aux = aux / 10;
		}
	}
		
	return retorno;
}

// Função que calcula o menor número formados pelos digitos de X
int menor_numero_com_digitos_de(int X)
{
	get_digitos(X);
	int aux = 1000;
	int retorno = 0;
	
	for (int i = 0; i < 10; i++)
	{
		// X pode ter mais de 1 digito, portanto o digito i precisa ser usado na
		// construção do novo número multiplas vezes
		// X = 1555, o digito 5 deve ser usado 3 vezes na contrução do novo número
		while (digitos[i] != 0)
		{
			digitos[i]++;
			retorno+= i * aux;
			aux = aux / 10;
		}
	}
		
	return retorno;
}

// Função que enquantra quantas iterações foram necessárias para encontrar o numero de krapekar
int krapekar(int X)
{
   int cnt = 0;

   while (X != 6174)
   {
       int maior = maior_numero_com_digitos_de(X);
       int menor = menor_numero_com_digitos_de(X);
       X = maior - menor;
       cnt = cnt + 1;
   }

   return cnt;
}

int main() 
{
	// T - Número de casos de teste
	// X - Inteiro de até 4 digitos
    int T, X;
	cin >> T; 

	for (int i = 0; i < T; i++)
    {     
		cin >> X; 
		get_digitos(X);
		int count = 0;
	    
	    //Contagen de digitos diferentes
		for (int j = 0; j < 10; j++) 
	    {
	        if(digitos[j] != 0)
	        {
				count++;
			}
		}

		//Verifica se existem 2 digitos diferentes
		if	(count <= 2)
		{
			// Imprime resultado para caso impossivel
	        cout << "Caso #" << i+1 << ": -1" << endl;
		}
	    else
	    {
			// Imprime resultado para caso possivel
	        cout << "Caso #" << i+1 << ": " << krapekar(X) << endl;
		}
	}
 
    return 0;
}
