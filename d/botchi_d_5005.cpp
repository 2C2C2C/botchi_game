#include <iostream>
#include <string>
#include <math.h>

using namespace std;

// お金が引き出せない銀行 [MISSION LEVEL: D]
// https://paiza.jp/botchi/challenges/botchi_d_5005

int main(void)
{
	// 自分の得意な言語で
	// Let's チャレンジ！！

	char charIndex[] = "0123456789";
	int intIndex[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::string str1;
	std::getline(std::cin, str1);
	std::string str2;
	std::getline(std::cin, str2);

	int store = 0;
	int want = 0;
	int i = 0, j = 0;
	for (i = 0; i < str1.length(); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (charIndex[j] == str1[str1.length() - 1 - i])
			{
				store += intIndex[j] * pow(10, i);
				break;
			}
		}
	}
	for (i = 0; i < str2.length(); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (charIndex[j] == str2[str2.length() - 1 - i])
			{
				want += intIndex[j] * pow(10, i);
				break;
			}
		}
	}

	if (want > store)
		std::cout << "error" << std::endl;
	else
		std::cout << store - want << std::endl;
	return 0;
}