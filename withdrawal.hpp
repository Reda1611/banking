#pragma once

class Card {
public:
    virtual int maxWithdrawal() const = 0;
    virtual int maxCredit() const = 0;
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
    Withdrawal(CardType& card);
    int operator()(int amount);
};
