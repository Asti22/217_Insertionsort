

#include <iostream>
using namespace std;

int arr[20];
int n;


void input() {

	while (true)
	{
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
		}

	}
	cout << endl;
	cout << "===============" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke_" << (i + 1) << ": ";
		cin >> arr[i];
	}

}

void insertionSort() {
	int i, j, temp;

	

	for (i = 1; i <= n - 1; i++) { // step 1
		temp = arr[i]; //step 2 

		j = i - 1; //step 3
		
		while (j >= 0 && arr[j] > temp)  //step 4a
		{
			arr[j + 1] = arr[j];
			j--; //step 4b
		}

		arr[j + 1] = temp;  //step 5
	}
}
void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl; //output setiap element array pada garis baru
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}



	int main() {
		input();
		insertionSort();
		display();

		system("pause");
		return 0;
	}
   



