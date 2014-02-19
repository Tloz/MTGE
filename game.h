#include <array>
#include <iostream>
#include <cstdint>
#include <deque>
#include <vector>

class Card;

/*
 * This is the main game aera
 * wich is supposed to contain:
 * - Each players' mana pool
 * - Each players' creatures,
 *                 artifacts,
 *                 enchatments.
 *  Dunno how to implement it yet...
 */
class Battlefield
{
    
};

class Player
{
    uint8_t m_life;
    std::vector<Card> m_graveyard;
    std::deque<Card> m_library;
    std::deque<Card> m_hand;

    void draw(int number = 1);
    void discardFromHand(int number = 1);
    void discardFromLibrary(int number = 1);
    void shuffleLibrary();
    void shuffleHand();
    void putOnTopOfLibrary(Card card);
    void putOnBottomOfLibrary(Card card);
};

class Game
{
    std::vector<Player> players;
    std::stack<Card> stack;
    std::deque<Card> exile;
    //Battlefield
    uint8_t turns;
};
