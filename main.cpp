#include <iostream>
#include <ctime>

#define MAXCOUNT 52

using namespace std;

int main() {
	// unsigned int �� ���ؼ� int�� ������ ������ ���ְ� �׸�ŭ ��������� �߰����ݴϴ�.
	srand((unsigned int)time(nullptr));

	//int list[52];
	//for (int i = 0; i < 52; i++)
	//{
	//	list[i] = i + 1;
	//}

	//for (int i = 0; i < 4; i++)	
	//{
	//	int a = rand() % 51 + 0;
	//	if (list[a] != 0)
	//	{
	//		cout << list[a] << endl;
	//		list[a] = 0;
	//	}
	//	else
	//	{
	//		i--;
	//		continue;
	//	}
	//}

	int Pocket[MAXCOUNT];	// 0 ~ 51

	for (int i = 0; i < MAXCOUNT; i++)
	{
		Pocket[i] = i + 1;
	}

	// � ���� �������� 52�� ������ ���� ������ �� �� �ִ�.
	for (int i = 0; i < 10000; i++)
	{
		int First = rand() % MAXCOUNT;
		int Second = rand() % MAXCOUNT;
		int Temp = Pocket[First];
		Pocket[First] = Pocket[Second];
		Pocket[Second] = Temp;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << Pocket[i] << endl;
	}

	int PickCards[4];
	for (int i = 0; i < 4; i++)
	{
		PickCards[i];
	}

	int CardType = Pocket[1] / 13;
	if (CardType == 0)
	{
		// Spade
	}
	else if (CardType == 1)
	{
		// Clover
	}
	else if (CardType == 2)
	{
		// Heart
	}
	else // (CardType == 3)
	{
		// Diamond
	}

	int CardNumber = Pocket[0] % 13;
	if (CardNumber == 10)
	{
		// J
	}
	else if (CardNumber == 11)
	{
		// Q
	}
	else if (CardNumber == 12)
	{
		// K
	}
	else
	{
		// ����
	}


	int n = 0;
	cin >> n;
	cin.ignore();
	cout << "    " << n << endl;

	std::cout << 5 << "�� �ݺ��մϴ�." << std::endl;
	return 0;
}