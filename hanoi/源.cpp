//����һ��ʹ�õݹ麯�������ŵ�������ʵ��
#include<iostream>
using namespace std;
void hanoi(int num, char A, char B, char C);
void hanoi(int num,char A,char B,char C) {
	if (num == 1) {
		cout << A << "->" << C << endl;
	}
	else {
		hanoi(num - 1, A, C, B);
		cout << A << "->" << C << endl;
		hanoi(num - 1, B, A, C);
	}
}
int main() {
	hanoi(3,'A','B','C');

		return 0;
}