#include<iostream>
#include "functions.h"
#include "functions.cpp"



int main() {



	bool ai_first = true;
	bool game_is_finished = false;
	draw_board(board);


	while (game_is_finished == false) {
		player_1_move();
		draw_board(board);
		//game_is_finished = check_if_game_is_finished();
		//if (game_is_finished == true){ break; }

		player_2_move();
		draw_board(board);
		//game_is_finished = check_if_game_is_finished();
	}

	//game_over();

	return 0;
}
