#include <iostream>

struct Account {
    int id;
    std::string name;
    float cash;
};

void alterAccount(Account & acc, float c) {
    acc.cash = c;
}

int main() {
    Account account;

    std::cout << "Insert id: ";
    std::cin >> account.id;
    std::cout << "Insert name: ";
    std::cin >> account.name;
    std::cout << "Insert cash balance: ";
    std::cin >> account.cash;

    float new_cash;

    std::cout << "Update cash balance: ";
    std::cin >> new_cash;
    alterAccount(account, new_cash);

    std::cout << "Your current account state: " << account.id << ", "
        << account.name << ", " << account.cash << std::endl;

    return 0;
}
