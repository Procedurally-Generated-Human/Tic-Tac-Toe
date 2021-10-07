#include "functions.h"
#include<iostream>


void draw_board(std::string map[3][3]){
	std::string row_1= " "+map[0][0]+" | "+map[0][1]+" | "+map[0][2]+" \n"; 
	std::string row_a= "---+---+---\n";
	std::string row_2= " "+map[1][0]+" | "+map[1][1]+" | "+map[1][2]+" \n"; 
	std::string row_b= "---+---+---\n";
	std::string row_3= " "+map[2][0]+" | "+map[2][1]+" | "+map[2][2]+" \n"; 
	std::string board = row_1 + row_a + row_2 + row_b + row_3;
	std::cout<< "\n" + board + "\n";
}




void player_1_move(){
	bool move_is_valid = false;
	while (move_is_valid == false) {
		std::cout<<"What Position Do You Choose (1-9): ";
		int position;
		std::cin >> position;
		if (position>=0 && position<= 9) {
			int coordinates[2] = {0,0};
			switch(position){
				case 1:
					coordinates[0] = 0; coordinates[1] = 0; break;
				case 2:
					coordinates[0] = 0; coordinates[1] = 1; break;
				case 3:
					coordinates[0] = 0; coordinates[1] = 2; break;
				case 4:
					coordinates[0] = 1; coordinates[1] = 0; break;
				case 5:
					coordinates[0] = 1; coordinates[1] = 1; break;
				case 6:
					coordinates[0] = 1; coordinates[1] = 2; break;
				case 7:
					coordinates[0] = 2; coordinates[1] = 0; break;
				case 8:
					coordinates[0] = 2; coordinates[1] = 1; break;
				case 9:
					coordinates[0] = 2; coordinates[1] = 2; break;
			}
			move_is_valid = true;
			board[coordinates[0]][coordinates[1]] = "X";
			break;

		}
		else {
			std::cout<<"Position Number is Invalid\n";
			continue;
		}
	}

}



void player_2_move(){
	bool move_is_valid = false;
	while (move_is_valid == false) {
		std::cout<<"What Position Do You Choose (1-9): ";
		int position;
		std::cin >> position;
		if (position>=0 && position<= 9) {
			int coordinates[2] = {0,0};
			switch(position){
				case 1:
					coordinates[0] = 0; coordinates[1] = 0; break;
				case 2:
					coordinates[0] = 0; coordinates[1] = 1; break;
				case 3:
					coordinates[0] = 0; coordinates[1] = 2; break;
				case 4:
					coordinates[0] = 1; coordinates[1] = 0; break;
				case 5:
					coordinates[0] = 1; coordinates[1] = 1; break;
				case 6:
					coordinates[0] = 1; coordinates[1] = 2; break;
				case 7:
					coordinates[0] = 2; coordinates[1] = 0; break;
				case 8:
					coordinates[0] = 2; coordinates[1] = 1; break;
				case 9:
					coordinates[0] = 2; coordinates[1] = 2; break;
			}
			move_is_valid = true;
			board[coordinates[0]][coordinates[1]] = "O";
			break;

		}
		else {
			std::cout<<"Position Number is Invalid\n";
			continue;
		}
	}

}



