#include <iostream>

namespace Earth{
    const double GRAVITY = 9.81;
}

namespace Mars{
    const double GRAVITY = 3.71;
}

int main(){

    // --- Part 4 ---
    using weight_t = double;
    typedef std::string text_t;
    
    // --- Part 1 ---
    int Container_ID = 101;
    weight_t Weight = 54.5;
    text_t Destination = "Mars Outpost";
    bool Is_Fragile = true;
    char Symbol = 'M';

    std::cout << "Cargo " << Container_ID << " to " << Destination << ". " << "Weight: " << Weight << ". " << "Fragile: " << Is_Fragile << '\n';

    // --- Part 2 ---
    const double Speed_of_Light = 299792.458;
    const int Max_Cargo_Weight = 10000;

    //Speed_of_Light = 100.0;

    // --- Part 3 ---
    std::cout << "Earth Gravity: " << Earth::GRAVITY << '\n';
    std::cout << "Mars Gravity: " << Mars::GRAVITY << '\n';

    // --- Final Part ---
    std::cout << "--- SHIPMENT REPORT ---" << '\n';
    std::cout << "Container ID: " << Container_ID << '\n';
    std::cout << "Destination: " << Destination << '\n';
    std::cout << '\n';
    std::cout << "Calculated Weight on Earth: " << Weight * Earth::GRAVITY << '\n';
    std::cout << "Calculated Weight on Mars: " << Weight * Mars::GRAVITY << '\n';

    return 0;
}
