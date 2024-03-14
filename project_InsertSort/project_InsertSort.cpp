#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 element.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl; 

	for (int i = 0; i < n; i++)
	{
		cout << "Data Ke-" << (i + 1) << ": ";
		cin >> arr[1];
	}
}

void insetionsort() {

	int temp;
	int i, j;

	for (i = 1; 1 <= n - 1; i++) {

		temp = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j] > temp)

		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;

		cout << "\nPass" << i << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << ": ";
		}
	}
}
int main()
{

}