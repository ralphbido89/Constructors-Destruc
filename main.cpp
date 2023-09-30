#include <iostream>
#include <string>


class Hero {
    private:
        std::string name;
        int strength;
        double agility;
        int intelligence;
    public:
        void set_name(std::string name_val) {
            name = name_val;
        };

        Hero(std::string name_val, int strength_val, double agility_val, int intel_val) {
            name = name_val;
            intelligence = intel_val;
            strength = strength_val;
            agility = agility_val;
        }

        std::string get_name() {
            return name;
        }


};






int main() {

    Hero tidehunter {"Tidehunter", 23, 1.4, 33};
    tidehunter.set_name("Tidehunter");
    std::cout << tidehunter.get_name() << std::endl;


    return 0;
}