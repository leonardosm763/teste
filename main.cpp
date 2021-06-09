#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	
	int N;
	
	cout << "Qual a ordem da matriz? ";
	cin >> N;
	
	int mat[N][N];
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << "Elemento [" << i << "," << j << "]: ";
			cin >> mat[i][j];
		}
	}
	
	cout << "DIAGONAL PRINCIPAL: " << endl;
	for (int i = 0; i < N; i++) {
		cout << mat[i][i] << " ";
	}
	
	int negativos = 0;
	for (int i = 0; i < N; i ++) {
		for (int j = 0; j < N; j++) {
			if (mat[i][j] < 0) {
				negativos++;
			}
		}
	}
	
	cout << "\nQUANTIDADE DE NEGATIVOS = " << negativos << endl;
	
	int soma = 0;
	for (int i = 0; i < N; i ++) {
		for (int j = 0; j < N; j++) {
			soma++;
		}
	}
	
	double raiz = sqrt(soma);
	cout << fixed << setprecision(2);
	cout << "RAIZ QUADRADA = " << raiz << endl;
	
	return 0;
}
