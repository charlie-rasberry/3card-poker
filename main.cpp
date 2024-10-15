#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::cin;

typedef struct card {
    string suit;
    string value;
} card;

std::vector<card> create_deck() {
    std::vector<card> deck;
    string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string value[12] = { "2" , "3", "4", "5", "6", "7", "8", "9","Jack","Queen","King", "Ace"};

    for (int i = 0; i < 4; i++) {  // Iterate over suits
        for (int j = 0; j < 12; j++) {  // Iterate over values
            card c = {suits[i], value[j]};
            deck.push_back(c);
        }
    }
    return deck;
}

int main() {
    std::vector<card> deck = create_deck();
    // Example: print the deck
    for (const auto& c : deck) {
        cout << c.value << " of " << c.suit << "\n";
    }
    return 0;
}
