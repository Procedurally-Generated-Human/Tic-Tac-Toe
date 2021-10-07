#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED


std::string board[3][3] = {{" ", " "," "},{" "," "," "},{" "," "," "}};;
bool ai_first = true;
bool game_is_finished = false;


void draw_board(std::string map[3][3]);
int get_coordinates(int position);
void player_1_move();
void player_2_move();





#endif