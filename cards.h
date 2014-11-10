#include <string>
#include <array>
#include <cstdint>
#include <iostream>

enum class Color{None = 0, Black = 1, Blue = 2, Green = 4, Red = 8, White = 16};
enum class Mana{Unco, Isle, Mountain, Swamp, Forest, Plain};
enum class Variety{Common, Unco, Rare, Mythic};

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
    Variety variety;
    bool funcard;
    /* Color color; Do we really need this?*/

    void tap();

};

class Permanent
{

};

class Land : public Card, public Permanent
{
    
};

class Spell : public Card
{
    bool counter;
    std::array<uint8_t, 6> cost;
};

class Creature : public Spell, public Permanent
{
    std::string type;
    uint8_t atk;
    uint8_t def;
    
    void attack(Player *p);
    void block(Creature *c)
};

class Artifact : public Spell, public Permanent
{

};

class CreatureArtifact : public Creature, public Artifact, public Permanent
{

};

class Enchantment : public Spell, public Permanent
{

};

class Instant: public Spell
{

};

class Sorcery : public Spell
{

};
