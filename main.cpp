#include <iostream>
#include <ctime>

#define MAXCOUNT 52

using namespace std;

int main() {
	// unsigned int 를 통해서 int형 범위에 음수를 없애고 그만큼 양수값으로 추가해줍니다.
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

	// 어떤 수가 나오더라도 52로 나누면 숫자 제한을 걸 수 있다.
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
		// 숫자
	}


	int n = 0;
	cin >> n;
	cin.ignore();
	cout << "    " << n << endl;

	std::cout << 5 << "번 반복합니다." << std::endl;
	return 0;
}