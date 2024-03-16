#pragma once

#include <string>
#include <memory>

class Client;
class Advisor;
class Bank;
class Card;

class Bank {
public:
    Bank();
    void createAccount(Client& client);
    void assignCard(Client& client, std::unique_ptr<Card> card);
};

class Account {
private:
    Bank& bank;
    Client& client;
    std::unique_ptr<Card> card;
    double amount;

public:
    Account(Bank& b, Client& c, std::unique_ptr<Card> crd, double amnt);
};

class User {
protected:
    std::string username;
    std::string password;

public:
    User(const std::string& uname, const std::string& pwd);
    virtual ~User() {}
    std::string getUsername() const;
    std::string getPassword() const;
};

class Advisor : public User {
private:
    Bank& bank;

public:
    Advisor(const std::string& uname, const std::string& pwd, Bank& b);
};

class Client : public User {
private:
    Bank& bank;
    Advisor* advisor;
    double cash;

public:
    Client(const std::string& uname, const std::string& pwd, Bank& b, Advisor* adv = nullptr);
    void assignAdvisor(Advisor* adv);
};

class ATM {
private:
    Bank& bank;

public:
    ATM(Bank& b);
};
