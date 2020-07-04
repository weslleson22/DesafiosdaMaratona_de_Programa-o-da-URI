///////////////////////////////////////
//             DESAFIO B             //
//        Revisão de Contrato        //
///////////////////////////////////////

#include <iostream>
 
using namespace std;
 
int main()
{
	// D - Digito com problema
	// N - Valor original do contrato
    int D;
    string N;
    int aux = 0;
     
	cin >> D >> N; 
    while (D != 0)
    {
    	aux = 0;
	    for (int i = 0; i < N.length(); i++)
	    {
	    	// Como o valor do contrato foi lido como String, precisamos converter para inteiro
			// "N[i]-'0'" é uma forma para converter caracteres para inteiro na escala 0 a 9.
	    	if (N[i]-'0' != D)
	    	{
	    		//Aux guarda quantos digitos diferentes de zero o numero
	    		if(N[i] != '0')
	    		{
	    		    aux ++;
				}
	    		
	    		// Para apresentação do resultado são removidos os '0' (zeros) a esquerda
	    		// exemplo 0000100 vai imprimir somente do 1 para frente, após a primerira ocorrencia de digito não nulo
	    		if(aux > 0)
	    		{
	    			//Imprime valor do contrato (digito a digito)
	    	        cout << N[i];
				}
			}
		}
		
		// Imprime quebra e linha
		cout << endl;
		
		// Leitura do proximo caso de teste
	    cin >> D >> N;
	}
 
    return 0;
}
