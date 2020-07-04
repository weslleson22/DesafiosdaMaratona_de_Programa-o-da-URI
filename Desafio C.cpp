///////////////////////////////////////
//             DESAFIO C             //
//      O Teorema de Pitágoras       //
///////////////////////////////////////

#include <iostream>
 
using namespace std;

// Função que calcula o Maximo Divisor Comum 
// Por exemplo: 12, 18 tem como maior divisor 6
int MDC (int a, int b)
{
	int resto;
	while (b != 0)
	{
		resto = a % b;
		a = b;
		b = resto;
	}
	return a;
}
 
int main()
{     
	// x, y, z representam as dimenções dos triangulos
    int x, y, z;
     
    //leitura das variaveis x, y, z
	cin >> x >> y >> z;
    while (!cin.eof())
    {
	    // Verifica se x, y e z atendem ao teorema de pitagoras.
	    if ((x*x + y*y == z*z))
	    {
	    	//Somente será primitiva se o maximo divisor comum for 1
	        if (MDC(x,MDC(y,z)) == 1)
	        {
	            cout << "tripla pitagorica primitiva" << endl;
			}
	        else
	        {
	            cout << "tripla pitagorica" << endl;
			}
		}
	    else
	    {
	        cout << "tripla" << endl;
		}
		
        //leitura das variaveis x, y, z
	    cin >> x >> y >> z;
	}
 
    return 0;
}
