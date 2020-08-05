#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(){
	int arr[4][4] = { 1, 2, 8, 9,
		2, 4, 9, 12,
		4, 7, 10, 13,
		6, 8, 11, 15 };
	int n;
	int row = 3;
	int col = 0;
	int leap = 1;
	cin >> n;
	while (row >= 0 && col <= 3){
		if (n > arr[row][col]){
			++col;
		}
		else if (n < arr[row][col]){
			--row;
		}
		else {
			printf("找到了!\n");
			leap = 0;
			break;
		}
	}
	if (leap){
		cout << "没找到!" << endl;
	}
	system("pause");
	return 0;
}