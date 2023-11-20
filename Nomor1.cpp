#include <iostream>

using namespace std;

// Function Bilangan Prima
void prima (int batas, int &sumPrima ){
  	cout << "Bilangan prima: ";
	  	for (int i = 2; i <= batas; ++i){
		int bilanganPrima = 1; 
		for (int j = 2; j * j <= i; ++j){
			if (i % j == 0){
				bilanganPrima = 0;
				break;
				}
		}
		if (bilanganPrima == 1){
			cout << i << " ";
			sumPrima += i;
			}
	}	cout << endl;
	}
  	
// Function Bilangan Ganjil  	
void ganjil (int batas, int &sumGanjil){
	cout << "Bilangan Ganjil : ";
	for (int j = 1; j <= batas; ++j){ 
			if (j % 2 != 0  ) cout << j << " ";
			if (j % 2 != 0  ) sumGanjil += j;
	} 	cout << endl;
}

// Function Bilangan Genap
void genap (int batas, int &sumGenap){
		cout << "Bilangan Genap : ";
	for (int k = 1; k <= batas; ++k){ 
			if (k % 2 == 0  ) cout << k << " ";
			if (k % 2 == 0  ) sumGenap += k;
	} cout << endl;
	
} 

// F A K T O R

// Function Faktor dari Jumlah Bilangan Prima
void faktorprima (int sumPrima){
	cout << "Faktor-faktor dari jumlah prima tersebut adalah: ";
	for (int r = 1; r <= sumPrima; r++){
		if (sumPrima % r == 0){
			 cout << r << " ";
			 }
		}	cout<<endl;
	}

// Function Faktor dari Jumlah Bilangan Ganjil
void faktorganjil (int sumGanjil){
	cout << "Faktor-faktor dari jumlah ganjil tersebut adalah: ";
	for (int s = 1; s <= sumGanjil; s++){
		if (sumGanjil % s == 0){
			 cout << s << " ";
			 }
		}	cout<<endl;
	}

// Function Faktor dari Jumlah Bilangan Genap
void faktorgenap (int sumGenap){
		cout << "Faktor-faktor dari jumlah genap tersebut adalah: ";
	for (int t = 1; t <= sumGenap; t++){
		if (sumGenap % t == 0){
			 cout << t << " ";
			 }
		}	cout<< endl;
	}


int main(){
	cout << "             PROGRAM MENGELOMPOKKAN BILANGAN BULAT              " << endl;
  	cout << "================================================================" << endl;
  
	int batas;
	int sumPrima = 0;
	int sumGanjil = 0;
	int sumGenap = 0;

	cout<< "Masukkan batas bilangan positif : "; cin>>batas;
	
    // Panggil Function 
    prima (batas, sumPrima);
  	ganjil (batas, sumGanjil);
    genap  (batas, sumGenap);

    cout << "Jumlah bilangan Prima: " << sumPrima << endl;
	cout << "Jumlah bilangan Ganjil: " << sumGanjil << endl;
	cout << "Jumlah bilangan Genap: " << sumGenap << endl;
	    
    // Memanggil function tadi buat menampilkan hasil faktor tadi
    faktorprima (sumPrima);
	faktorganjil (sumGanjil);  
	faktorgenap (sumGenap);
	  
}