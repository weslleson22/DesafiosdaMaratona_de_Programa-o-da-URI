#include <iostream>
 
using namespace std;
 
int main()
{   
    // Va é a velocidade sua
    // Vb é a velovidade de seu amigo
    // S é a distância entre os dois
    float Va, Vb, S;
    float result;
    
    //Formata saida de acordo com requisito solicitado
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
     
	cin >> S >> Va >> Vb;
    while (!cin.eof())
    {
	    result = S / (Vb-Va);
	    if (result < 0)
	        cout << "impossivel" << endl;
	    else
	        cout << result << endl;
	    cin >> S >> Va >> Vb;
	}
 
    return 0;
}
