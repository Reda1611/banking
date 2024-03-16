#pragma once

class Card {
public:
    virtual int maxWithdrawal() const = 0;
    virtual int maxCredit() const = 0;
    virtual ~Card() {}
};

class GoldCard : public Card {
public:
    int maxWithdrawal() const override;
    int maxCredit() const override;
};

class PlatinumCard : public Card {
public:
    int maxWithdrawal() const override;
    int maxCredit() const override;
};

class BlackCard : public Card {
public:
    int maxWithdrawal() const override;
    int maxCredit() const override;
};

template<typename CardType>
class Withdrawal {
private:
    CardType& creditCard;

public:
    Withdrawal(CardType& card) : creditCard(card) {} 
    int operator()(int amount);
};



int GoldCard::maxWithdrawal() const {
    return 1000; 
}

int GoldCard::maxCredit() const {
    return 5000; 
}

int PlatinumCard::maxWithdrawal() const {
    
    return 2000; 
}

int PlatinumCard::maxCredit() const {
    
    return 10000; 
}

int BlackCard::maxWithdrawal() const {
    
    return 5000; 
}

int BlackCard::maxCredit() const {

    return 20000; 
}

template<typename CardType>
int Withdrawal<CardType>::operator()(int amount) {


        return amount; 
}
