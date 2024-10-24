#include "Game.h"

int main(){
    Game game = Game();
    cout << "INITING" << endl;
    game.initGame(2, 1, 5, 5);
    cout << "DONE INITING" << endl;
    game.gameLoop(3, 1);
    return 0;
}