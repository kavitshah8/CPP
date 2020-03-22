#include <vector>
#include "Game.h"
#include "Cube.h"
#include "Stack.h"

Game::Game() {
    // create four cubes and put it on stack [0]
    Cube one(1);
    Cube two(2);
    Cube three(3);
    Cube four(4);
    
    // create three stacks
    std::vector<Stack> StackCollection;

    for(int i = 0; i < 3; i++) {
        StackCollection.push(new Stack());
    }
}