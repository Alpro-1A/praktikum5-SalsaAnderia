#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n == 0 || n ==1){
    return n;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}
  
int main()
{
  cout << "          PROGRAM DERET FIBONACCI           " << endl;
  cout << "============================================" << endl;
  
  int n, i, j = 0;
 
    cout << "Jumlah deret fibonacci yang dibutuhkkan: "; cin >> n;
 	cout << "Hasil bilangan fibonacci: \n";
 		 for (i = 1; i <= n; i++){
    		cout << "fibonacci ke-"<< i <<": " << fibonacci(j) << endl;
   		 j++;
 		 }
    
  cout << endl;
  cout << "============================================" << endl;
  return 0;
}