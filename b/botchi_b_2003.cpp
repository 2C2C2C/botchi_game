#include <iostream>
using namespace std;

// 隔離された街のゲート [MISSION LEVEL: B]
// https://paiza.jp/botchi/challenges/botchi_b_2003

int main(void)
{
    // 自分の得意な言語で
    // Let's チャレンジ！！
	int mapHWN[] = { 0,0,0 };
	int posX = 0, posY = 0, idx = 0;
	bool correct = true;
	std::string size_move;
	std::string movesWa;
	std::getline(std::cin, size_move);

	// to get size and move count
	for (int i = 0; i < 3; i++)
	{
		idx = size_move.find_first_of(' ');
		mapHWN[i] = atoi(size_move.substr(0, idx).c_str());
		size_move = size_move.substr(idx + 1, size_move.length());
	}

	std::string moveWa = "w";
	for (int i = 0; i < mapHWN[2]; i++)
	{
		std::getline(std::cin, moveWa);
		if (moveWa == "U")
			posY++;
		if (moveWa == "D")
			posY--;
		if (moveWa == "L")
			posX--;
		if (moveWa == "R")
			posX++;

		if ((posX > mapHWN[1] - 1 || posY > mapHWN[0] - 1)||(posX < 0 || posY < 0))
			correct = false;
	}
	if (correct)
		std::cout << "valid" << std::endl;
	else
		std::cout << "invalid" << std::endl;
		
    return 0;
}
