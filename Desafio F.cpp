///////////////////////////////////////
//             DESAFIO F             //
//              Corrida              //
///////////////////////////////////////

#include <iostream>
 
using namespace std;
 
int main()
{   
    // Va é a velocidade sua
    // Vb é a velovidade de seu amigo
    // S é a distância entre os dois
    float Va, Vb, S;
    float result;
    
    //Formata saida de acordo com requisito solicitado no enunciado para 3 digitos decimais
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    // Leitura da distancia e das velocidades
	cin >> S >> Va >> Vb;
	
    while (!cin.eof())
    {
    	// Calculo da distancia sobre a diferença de velocidade
	    result = S / (Vb-Va);
	    
		if (result < 0)
	    {
	        cout << "impossivel" << endl;
		}
	    else
	    {
	        cout << result << endl;
		}
		
	    cin >> S >> Va >> Vb;
	}
 
    return 0;
}
