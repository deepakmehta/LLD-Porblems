/* Let us see how to design a basic Snake Game which provides the following functionalities:
• Snake can move in a given direction and when it eats the food, the length of snake increases. 
• When snake crosses itself, the game will over. 
• Food will be generated at a given interval.
Asked In: Amazon, Microsoft, and many more interviews 
This question is asked in interviews to Judge the Object-Oriented Design skill of a candidate. So, first of all, we should think about the classes. 
The main classes will be:
1. Snake 
2. Cell 
3. Board 
4. Game 
The class Game represents the body of our program. It stores information about the snake and the board.
The Cell class represents the one point of display/board. It contains the row no, column no and the information about it i.e. it is empty or there is food on it or is it a part of snake body?

*/

/* Lets start bottom up
   First think about Snake
*/

#include<list>
#include<iostream>

using namespace std;

enum CellTypeT {
    EMPTY_,
    FOOD_,
    SNAKE_BODY_
};

class Cell {
 private:
    int row_;
    int col_;
    CellTypeT celltype_;

Cell(int row, int col, CellTypeT celltype): row_(row), col_(col), celltype_(celltype) {

}

void SetCellType(CellTypeT celltype) {
    celltype_ = celltype;
}

};


class Snake {

private:
  list<Cell&> head_;

Snake(Cell& initPos) {
    head_.push_front(initPos);
}
};


class Board {
    
};