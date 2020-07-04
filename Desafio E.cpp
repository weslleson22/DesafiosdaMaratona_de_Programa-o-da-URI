///////////////////////////////////////
//             DESAFIO E             //
//              Imagem               //
///////////////////////////////////////

#include <iostream>

using namespace std;
 
int main()
{
	// M é quantidade de linhas da imagem original
	// N é quantidade de colunas da imagem original
	// A é quantidade de linhas da imagem ampliada
	// B é quantidade de colunas da imagem ampliada
    int M, N, A, B;
    
    // Leitura das linhas e Colunas Originais
	cin >> N >> M; 
	
    while (M != 0)
    {
    	string s[51];
    	
	    for (int i = 0; i < N; i++)
	    {
		     cin >> s[i];
		}
		
		// Leitura das linhas e Colunas ampliadas
		cin >> A >> B;
		// fa - Fator de escala altura da Imagem original para Imagem Amplida
		// fb - Fator de escala largura da Imagem original para Imagem Amplida 
		int fa = A / N;
		int fb = B / M;
		 
	    for (int i = 0; i < N; i++)
	    {
	        for (int ai = 0; ai < A; ai++)
	        {
	            for (int j = 0; j < M; j++)
	            {
	                for (int bi = 0; bi < B; bi++)
	                {
		                // Imprime char da imagem
		                cout << s[i][j];
					}
				}
		        // Imprime quebra e linha
		        cout << endl;
	    	}
	    }
	    
		// Imprime quebra e linha
		cout << endl;
		
		// Leitura do proximo caso de teste
	    cin >> M >> N;
	}
 
    return 0;
}
