
#include <iostream>
using namespace std;

// アンドロイドの生産工場 [MISSION LEVEL: D]
// https://paiza.jp/botchi/challenges/botchi_d_4003

int main(void)
{
	// 自分の得意な言語で
	// Let's チャレンジ！！

	std::string str;
	std::string rst;
	std::getline(std::cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (i % 2 == 0)
			rst += str[i];
	}
	std::cout << rst << std::endl;
	return 0;
}