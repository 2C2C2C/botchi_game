#include <iostream>

using namespace std;

// 錆びついた電波塔 [MISSION LEVEL: D]
// https://paiza.jp/botchi/challenges/botchi_d_5004

int main(void)
{
	// 自分の得意な言語で
	// Let's チャレンジ！！

	std::string tryCoutStr;
	std::getline(std::cin, tryCoutStr);
	std::string waveStr;
	std::getline(std::cin, waveStr);

	int tryCount = atoi(tryCoutStr.c_str());
	int successCount = 0;
	int idx = 0, wave = 0;
	for (int i = 0; i < tryCount; i++)
	{
		idx = waveStr.find_first_of(' ');
		wave = atoi(waveStr.substr(0, idx).c_str());
		if (wave > 5)
			successCount++;
		waveStr = waveStr.substr(idx + 1, waveStr.length());
	}
	std::cout << successCount << std::endl;

	return 0;
}