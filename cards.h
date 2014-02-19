#include <string>
#include <array>
#include <cstdint>
#include <iostream>

enum class Color{None, Black, Blue, Green, Red, White};
enum class Mana{Unco, Isle, Mountain, Swamp, Forest, Plain};
enum class Variety{Common, Unco, Rare};

class Player;

class Card
{
    typedef struct ID
    {
        int8_t edition; /* negatives are for funcards */
        uint16_t number;
    } ID_t;

    bool taped;
    bool permanent;
    std::string name;
    std::string illustrator;
    Variety variety;
    bool funcard;
    /* Color color; Do we really need this?*/

    void tap();

};

class Land : public Card
{
    
};

class Spell : public Card
{
    bool counter;
    std::array<uint8_t, 6> cost;
};

class Creature : public Spell
{
    std::string type;
    uint8_t atk;
    uint8_t def;
    
    void attack(Player p);
};

class Artifact : public Spell
{

};

class CreatureArtifact : public Creature, public Artifact
{

};
