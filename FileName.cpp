#include <iostream>
using namespace std;
enum class Operation {Perimeter=1, Square, Isosceles};
bool Isosb(int a,int b, int c) {
	int pr = 1;
	if (a!=b && a!=c && b!=c)
	{
		pr = 0;
	}
	if (pr==1)
	{
		return true;
	}
};
void Triangle(int a,int b,int c) {
	cout << "��� �� ������ ������?" << endl;
	cout << "������� 1, ���� ������ ������ ��������" << endl;
	cout << "������� 2, ���� ������ ������ �������" << endl;
	cout<< "������� 3, ���� ������ ������ �������������� �� �����������" << endl;
	int choice;
	bool pr = Isosb(a, b, c);
	cin >> choice;
	int perim=a+b+c;
	double sq = sqrt(perim/2*(perim/2-a)* (perim/2 - b)*(perim/2 - c));
	Operation ch = static_cast<Operation>(choice);
	switch (ch){
	case Operation::Perimeter:
	{
		cout <<"�������� ����� " << perim << endl;
		break;
	}
	case Operation::Square:
	{
		cout << "������� ����� " << sq << endl;
		break;
	}
	case Operation::Isosceles:
	{
		if (pr==true){
			cout << "����������� ��������������" << endl;
		}
		else{
			cout << "����������� ����������������" << endl;
		}
		break;
	}
	default:
		cout << "�� ������� ���-�� �� ��� :-(" << endl;
		break;
	}
};
int main() {
	setlocale(LC_ALL, "Rus");
	int a = 5, b = 6, c = 7;
	Triangle(a, b, c);
	return 0;
}