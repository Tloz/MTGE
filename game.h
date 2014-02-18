#include <array>
#include <iostream>
#include <cstdint>
#include <deque>
#include <vector>

class Card;

class Battlefield
{
    
};

class Player
{
    uint16_t m_life;
    std::vector<Card> m_graveyard;
    std::deque<Card> m_library;
    std::deque<Card> m_hand;
};

class Game
{
    std::vector<Player> players;
    std::stack<Card> stack;
    std::deque<Card> exile;
    //Battlefield
    uint8_t turns;
};
