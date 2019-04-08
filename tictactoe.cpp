/*
Jonathan Rosas
Tic-tac-toe game
This program is a tictactoe game
*/

#include <iostream>
using namespace std;

 // creates 3x3 box for game board
 char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9' };
 // Players defined by X and Y 
 char player = 'X';

 // Draws the game board
 void Draw(){
 	cout << "Game of Champions: Tic-tac-toe, who will win? \n";
 	for(int i = 0; i  < 3; i++){
 		for(int j = 0; j < 3; j++){
 			cout << matrix[i][j] << " ";
 		}
 		cout << endl;
 	} 
 }
 // Takes input from users to place their X or O
 void Input(){
 	int a;
 	cout << "Press the number of the square: ";
 	cin >> a;
 	if(cin.fail())
 	{
 		cout << "That's not a box! Try again!" << endl;
 		cin.clear();
 		cin >> a;
 	}
 	else if(a < 1 || a > 9){
 		cout << "Oops you picked an invisible box! Try again!" << endl;
 		cin >> a;
 	}


 	if(a == 1){
 		matrix[0][0] = player;
 	}
 	else if(a == 2){
 		matrix[0][1] = player;
 	}
 	else if(a == 3){
 		matrix[0][2] = player;
 	}
 	else if(a == 4){
 		matrix[1][0] = player;
 	}
 	else if(a == 5){
 		matrix[1][1] = player;
 	}
 	else if(a == 6){
 		matrix[1][2] = player;
 	}
 	else if(a == 7){
 		matrix[2][0] = player;
 	}
 	else if(a == 8){
 		matrix[2][1] = player;
 	}
 	else if(a == 9){
 		matrix[2][2] = player;
 	}
 }
 void togglePlayer(){
 	if(player == 'X'){
 		player = 'O';
 	}
 	else
 		player = 'X';
 }
 char winCheck(){
 	// Columns
 	if(matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X'){
 		return 'X';
 	}
 	if(matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X'){
 		return 'X';
 	}
 	if(matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X'){
 		return 'X';
 	}
 	// Rows
 	if(matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X'){
 		return 'X';
 	}
 	if(matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X'){
 		return 'X';
 	}
 	if(matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X'){
 		return 'X';
 	}
 	// Diagonals
 	if(matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X'){
 		return 'X';
 	}
 	if(matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X'){
 		return 'X';
 	}
 	// Columns
 	if(matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O'){
 		return 'O';
 	}
 	if(matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O'){
 		return 'O';
 	}
 	if(matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O'){
 		return 'O';
 	}
 	// Rows
 	if(matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O'){
 		return 'O';
 	}
 	if(matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O'){
 		return 'O';
 	}
 	if(matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O'){
 		return 'O';
 	}
 	// Diagonals
 	if(matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O'){
 		return 'O';
 	}
 	if(matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O'){
 		return 'O';
 	}

 	return '/';
 	


 }

 int main(){

 	Draw();
 	while(true)
 	{
 		Input();
 		Draw();
 		if(winCheck() == 'X'){
 			cout << "X is the winner!" << endl;
 			break;
 		}
 		else if(winCheck() == 'Y'){
 			cout << "O is the winner!" << endl;
 			break;
 		}
 		togglePlayer();
 	}
 	
 }