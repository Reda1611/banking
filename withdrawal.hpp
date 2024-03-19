#pragma once


class Card {
public:
    virtual int maxWithdrawal() const = 0;
    virtual ~Card() {}
};


class GoldCard : public Card {
public:
    int maxWithdrawal() const override {
        return 1000; 
    }
};


class PlatinumCard : public Card {
public:
    int maxWithdrawal() const override {
        return 2000; 
    }
};

class BlackCard : public Card {
public:
    int maxWithdrawal() const override {
        return 5000; 
    }
};

template<typename CardType>
class Withdrawal {
private:
    const CardType& creditCard;

public:
    Withdrawal(const CardType& card) : creditCard(card) {} 


void operator()(int amount) const {
        if (amount <= creditCard.maxWithdrawal()) {
            
            std::cout << "Retrait de " << amount << " euros effectué avec succès." << std::endl;
        } else {
            std::cout << "Montant de retrait supérieur au maximum autorisé pour cette carte." << std::endl;
        }
    }
};
