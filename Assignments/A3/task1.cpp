#include <iostream>
#include <fstream>
using namespace std;
void input(ifstream& fin, int* ptr1, int s);
void even(ifstream& fin, int* ptr1, int s);
void odd(ifstream& fin, int* ptr1, int s);
int main() {
	ifstream fin;
	int size = 0;
	fin.open("data.txt");
	fin >> size;
	int* ptr = new int[size];
	input(fin, ptr, size);
	even(fin, ptr, size);
	odd(fin, ptr, size);
	ptr = NULL;
	delete[]ptr;
	fin.close();
	return 0;

}
void input(ifstream& fin, int* ptr1, int s) {
	for (int i = 0; i < s; i++) {
		fin >> ptr1[i];
	}
}
void even(ifstream& fin, int* ptr1, int s) {
	int temp = 0;
	cout << "Updated Data: " << endl;
	for (int i = 0; i < s; i++) {
		for (int j = i + 1; j < s; j++) {
			if (ptr1[i] > ptr1[j]) {
				temp = ptr1[i];
				ptr1[i] = ptr1[j];
				ptr1[j] = temp;

			}
		}
	}
	for (int i = 0; i < s; i++) {
		if (ptr1[i] % 2 == 0) {
			cout << ptr1[i] << " ";
		}
	}
}
void odd(ifstream& fin, int* ptr1, int s) {
	int temp = 0;
	for (int i = 0; i < s; i++) {
		for (int j = i + 1; j < s; j++) {
			if (ptr1[i] < ptr1[j]) {
				temp = ptr1[i];
				ptr1[i] = ptr1[j];
				ptr1[j] = temp;
			}
		}
	}
	for (int i = 0; i < s; i++) {
		if (ptr1[i] % 2 == 1) {
			cout << ptr1[i] << " ";
		}
	}
}