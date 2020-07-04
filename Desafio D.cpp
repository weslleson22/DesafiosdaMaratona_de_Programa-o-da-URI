///////////////////////////////////////
//             DESAFIO D             //
//          Frase Completa           //
///////////////////////////////////////

#include <iostream>
 
using namespace std;
 
int main()
{
	//N é a quantidade de frases
    int N, aux, count;
    bool caracteres[26];
    string s;
    
    //Leitura da quantidade de casos de teste
	cin >> N ; 
	 //Leitura getline apenas para pegar a quebra de linha após leitura de N, ainda não corresponde a uma frase
	getline(cin, s);
	
	for (int j = 0; j < 26; j++)
	{
	    caracteres[j] = false;
	}

	for (int i = 0; i < N; i++)
    {
		// Leitura do caso de teste
	    getline(cin, s);
	    
	    for (int j = 0; j < s.length(); j++)
	    {
	    	if (s[j] >= 'a' && s[j] <= 'z')
	    	{
	    		// "s[j]-'a'" é uma forma para converter caracteres para de escala de 0 a 25.
	    		// Suponha que s[j] = 'c', quando fazemos 'c' - 'a', ambos são convertidos para 
	    		// seu correspondente valor numerico em ASCII, ou seja 'c' - 'a' => 99 - 97 = 2 (terceiro caractere contando a partir de 0) 
	    	    caracteres[s[j]-'a'] = true;
			}
		}
		
		count = 0;
		
		// Contagem de caracteres presentes na frase
	    for (int j = 0; j < 26; j++)
	    {
	    	if (caracteres[j] == false)
	    	{
	    	    count++;
	    	    caracteres[j] = false;
			}
		}
		
		//Imprime possiveis resultados
		if(count == 26)
		{
		    cout << "frase completa" << endl;
		}
		else if (count >= 13)
		{
		    cout << "frase quase completa" << endl;
		}
		else
		{
		    cout << "frase mal elaborada" << endl;
		}
	    
	}
 
    return 0;
}
