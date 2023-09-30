#include <iostream>
#include <string>






class Player 
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        void set_name(std::string name_val) {
            name = name_val;
        };
    //OVERLOAD CONSTRUCTORS
        Player();
        Player(std::string name);
        Player(std::string name, int health, int xp);

    //ONLY ONE DESTRUCTOR PER CLASS
        ~Player();
};

int main() {
    {
        Player *enemy = new Player("Enemy", 1000, 0);
    }

    {
        Player slayer;
        slayer.set_name("Playa");
        //ONCE THIS OBJECT GOES OUT OF SCOPE, MEANING OUT OF THE CURLY BRACES, THE DESTRUCTOR IS AUTO CALLED.
    }
    
}