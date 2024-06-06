#include <iostream>

#define ROWS 45
#define COLUMNS 45
int main() {

	//Row, column
	unsigned long long board[ROWS][COLUMNS];

	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {

			if (j == 0) {

				board[i][j] = 1;
				continue;
			}
			else if (i == 0 && j > 0) {

				board[i][j] = 0;
				continue;
			}
			board[i][j] = board[i - 1][j - 1] + board[i - 1][j];
		}
	}
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {

			if (board[i][j] == 0) {

				std::cout << ' ';
				continue;
			}
			std::cout << board[i][j] << ' ';
			//if (board[i][j] % 2 == 0) {
			//
			//	std::cout << '1';
			//	continue;
			//}
			//std::cout << 0;
		}
		std::cout << "\n";
	}

	return 0;
}
