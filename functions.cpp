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
			if (board[coordinates[0]][coordinates[1]] == "X"||board[coordinates[0]][coordinates[1]] =="O"){
				std::cout<<"Position Number Is Invalid\n";
				continue;
			}
			else {
				move_is_valid = true;
				board[coordinates[0]][coordinates[1]] = "X";
				break;
			}
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
			if (board[coordinates[0]][coordinates[1]] == "X"||board[coordinates[0]][coordinates[1]] =="O"){
				std::cout<<"Position Number Is Invalid\n";
				continue;
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


char check_if_game_is_finished(std::string map[3][3]){
	std::string x = "XXX";
	std::string o = "OOO";
	std::string r1 = map[0][0]+map[0][1]+map[0][2];
	std::string r2 = map[1][0]+map[1][1]+map[1][2];
	std::string r3 = map[2][0]+map[2][1]+map[2][2];
	std::string c1 = map[0][0]+map[1][0]+map[2][0];
	std::string c2 = map[0][1]+map[1][1]+map[2][1];
	std::string c3 = map[0][2]+map[1][2]+map[2][2];
	std::string v1 = map[0][0]+map[1][1]+map[2][2];
	std::string v2 = map[0][2]+map[1][1]+map[2][0];
	std::string full_board = r1+r2+r3;

	if (r1==x||r2==x||r3==x||c1==x||c2==x||c3==x||v1==x||v2==x){
		return 'x';
	}
	else if (r1==o||r2==o||r3==o||c1==o||c2==o||c3==o||v1==o||v2==o){
		return 'o';
	}
	else if (!(full_board.find(" ")!= std::string::npos)){
		return 't';
	}

	else {
		return 'n';
	}

}
