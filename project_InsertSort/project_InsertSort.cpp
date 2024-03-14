#include <iostream>
using namespace std;

int arr[20];																			//Mmebuat Array dengan panjang data 20
int n;																					//Membuat variabel input n

void input() {																			//Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";									//Membuat Inputan jumlah element Array
		cin >> n;																		//Mmemanggil variabel inputan n

		if (n <= 20) {																	//Mmebuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 element.\n";				//Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;																		//Membuat jarak per baris program
	cout << "======================" << endl;											//Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl; 

	for (int i = 0; i < n; i++)															//Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data Ke-" << (i + 1) << ": ";											//Masukkan atau menginputkan nilai data n
		cin >> arr[1];																	//Menyimpan nilai data n kedalam arr
	}
}

void insertionsort() {																	//Procedure InsertionSort

	int temp;																			//Membuat variabel data temporer atau menyimopan sementara
	int i, j;																			//Mmebuat variabel j sebagai penanda

	for (i = 1; 1 <= n - 1; i++) {														//1.Looping dengan nilai i dimulai dari 1 hingga n-1

		temp = arr[i];																	//2.Simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;																		//3.Setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)													//4.Looping while dimana nilai j lebih besar sama dengan 0 dan
																						//arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];														//4a.Simpan arr[j] ke dalam variabel arr[j + 1]
			j--;																		//4b.Decreement nilai j by 1
		}

		arr[j + 1] = temp;																//5.Simpan nilai temp ke dalam arr[j + 1}

		cout << "\nPass" << i << ": ";													//Output ke layar
		for (int k = 0; k < n; k++) {													//Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << ": ";														//Output ke layar
		}
	}
}

void display() {																		//Procedure Display
	cout << endl;																		//Output baris kosong
	cout << "\n========================" << endl;										//Output ke layar
	cout << "Element Array yang disusun" << endl;										//Output ke layar
	cout << "==========================" << endl;										//Output ke layar

	for (int j = 0; j < n; j++) {														//Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;															//Output ke layar
	}
	cout << endl;																		//Output baris kosong
}

int main()
{
	input();																			//Memanggil input
	insertionsort();																	//Memanggil insertionsort
	display();																			//Memanggil display
}