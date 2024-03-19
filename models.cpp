#include "models.hpp"

using namespace std;


Bank::Bank() {}

void Bank::createAccount(shared_ptr<Client> client) {
}

void Bank::assignCard(shared_ptr<Client> client, unique_ptr<Card> card) {
}


Account::Account(Bank* b, shared_ptr<Client> c, unique_ptr<Card> crd, double amnt)
    : bank(b), client(c), card(move(crd)), amount(amnt) {}

unique_ptr<Card>& Account::getCard() {
    return card;
}


User::User(const string& uname, const string& pwd)
    : username(uname), password(pwd) {}

string User::getUsername() const {
    return username;
}

string User::getPassword() const {
    return password;
}

Advisor::Advisor(const string& uname, const string& pwd, Bank* b)
    : User(uname, pwd), bank(b) {}

Client::Client(const string& uname, const string& pwd, Bank* b, shared_ptr<Advisor> adv)
    : User(uname, pwd), bank(b), advisor(adv), cash(0) {}

void Client::assignAdvisor(shared_ptr<Advisor> adv) {
    advisor = adv;
}

shared_ptr<Account>& Client::getAccount() {
    return account;
}

ATM::ATM(Bank* b)
    : bank(b) {}
