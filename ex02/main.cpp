#include "FragTrap.hpp"

int main() 
{
    std::cout << "Creating a FragTrap:\n";
    FragTrap frag("Fraggy");
    std::cout << "\n"; // constructor chaining 

    std::cout << "Testing FragTrap's attack and high fives:\n";
    frag.attack("Enemy");
    frag.highFivesGuys();
    std::cout << "\n";

    std::cout << "Testing FragTrap's destruction:\n";
    std::cout << "End of main\n";

    return 0;
}