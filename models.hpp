#pragma once

#include <string>
#include <memory>
#include "withdrawal.hpp" 

class Advisor;
class Card;

class Bank {
public:
    Bank();
    void createAccount(std::shared_ptr<Client> client);
    void assignCard(std::shared_ptr<Client> client, std::unique_ptr<Card> card);


template<typename CardType>
    void withdraw(std::shared_ptr<Client> client, int amount) {
        if (client && client->getAccount()) {
            Withdrawal<CardType> withdrawal(*(client->getAccount()->getCard()), amount);
            withdrawal(); 
        } else {
            std::cout << "Client non valide ou pas de compte associé." << std::endl;
        }
    }
};

class Account {
private:
    Bank* bank; 
    std::shared_ptr<Client> client; 
    std::unique_ptr<Card> card;
    double amount;

public:
    Account(Bank* b, std::shared_ptr<Client> c, std::unique_ptr<Card> crd, double amnt);
    std::unique_ptr<Card>& getCard(); 
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
    Bank* bank; 

public:
    Advisor(const std::string& uname, const std::string& pwd, Bank* b);
};

class Client : public User {
private:
    Bank* bank; 
    std::shared_ptr<Advisor> advisor; 
    double cash;
    std::shared_ptr<Account> account; 

public:
    Client(const std::string& uname, const std::string& pwd, Bank* b, std::shared_ptr<Advisor> adv = nullptr);
    void assignAdvisor(std::shared_ptr<Advisor> adv);
    std::shared_ptr<Account>& getAccount(); 
};

class ATM {
private:
    Bank* bank; 

public:
    ATM(Bank* b);
};
