#include <iostream>

using namespace std;

void piramidaGemas (int n){
		char currentChar = '*';
	for (int i = 0; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << " ";
		}
	for (int k = 1; k <= i; k++){
		cout << currentChar << " ";
		}

		cout << endl;
		}
	
}

int main(){
	cout << "  PROGRAM MEMBUAT PIRAMIDA GEMAS  "<<endl;
	cout << "===================================\n";
	int n;

	cout << "    Masukkan tinggi piramida: "; cin >> n;
	
// Panggil Function
	piramidaGemas (n);
	cout << "===================================\n";
		
return 0;
}