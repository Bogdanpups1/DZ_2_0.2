#include <iostream>
using namespace std;

class Drob
{
private:
	int num1;
	int num2;
	int num3;
	int num4;
public:
	void Init(int n1, int n2, int n3, int n4)
	{
		num1 = n1;
		num2 = n2;
		num3 = n3;
		num4 = n4;
	}
	void Print()
	{
		cout << num1 << "   " << num3 << "\n- + -\n" << num2 << "   " << num4 << endl;;
	}
	void Print_Plus()
	{
		cout << "Answer: " << endl;
		cout << num1 * num4 + num3 * num2 << endl;
		cout << "-" << endl;
		cout << num2 * num4 << endl;
	}
	void Print_Minus()
	{
		cout << "Answer: " << endl;
		cout << num1 * num4 - num3 * num2 << endl;
		cout << "-" << endl;
		cout << num2 * num4 << endl;
	}
	void Print_Multip()
	{
		cout << "Answer: " << endl;
		cout << num1 * num3 << endl;
		cout << "-" << endl;
		cout << num2 * num4 << endl;
	}
	void Print_Divis()
	{
		cout << "Answer: " << endl;
		cout << num1 * num4 << endl;
		cout << "-" << endl;
		cout << num2 * num3 << endl;
	}
	int N1()
	{
		return num1;
	}
	int N2()
	{
		return num2;
	}
	int N3()
	{
		return num3;
	}
	int N4()
	{
		return num4;
	}
	void SN1(int n1)
	{
		num1 = n1;
	}
	void SN2(int n2)
	{
		if (n2 == 0)
		{
			cout << "Знаменатель не может быть 0, заменен на 1!" << endl;
		}
		else
		{
			num2 = n2;
		}
	}
	void SN3(int n3)
	{
		num3 = n3;
	}
	void SN4(int n4)
	{
		if (n4 == 0)
		{
			cout << "Знаменатель не может быть 0, заменен на 1!" << endl;
		}
		else
		{
			num4 = n4;
		}
	}
};

int main()
{
	Drobi obj1;
	int num1, num2, num3, num4;
	cout << "First drob: " << endl;
	cout << "First number: " << endl;
	cin >> num1;

	cout << "Second number: " << endl;
	cin >> num2;

	cout << "Second drob: " << endl;
	cout << "First number: " << endl;
	cin >> num3;

	cout << "Second number: " << endl;
	cin >> num4;
	obj1.Init(num1, num2, num3, num4);

	if (num2 == 0)
	{
		obj1.SN2(1);
	}
	if (num4 == 0)
	{
		obj1.SN4(1);
	}

	int choise;
	cout << "Write (1-4)" << endl;
	cout << "(1) +" << endl;
	cout << "(2) -" << endl;
	cout << "(3) *" << endl;
	cout << "(4) /" << endl;
	cin >> choise;
	cout << endl;
	switch (choise)
	{
	case 1:
		obj1.Print();
		obj1.Print_Plus();
		break;
	case 2:
		obj1.Print();
		obj1.Print_Minus();
		break;
	case 3:
		obj1.Print();
		obj1.Print_Multip();
		break;
	case 4:
		obj1.Print();
		obj1.Print_Divis();
		break;

	default:
		cout << "Try again!" << endl;
		break;
	}
}