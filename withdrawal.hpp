#pragma once

// Interface abstraite pour les cartes
class Card {
public:
    virtual int maxWithdrawal() const = 0;
    virtual ~Card() {}
};

// Exemple de carte : Carte Gold
class GoldCard : public Card {
public:
    int maxWithdrawal() const override {
        return 1000; // Exemple : montant maximum de retrait pour la carte Gold
    }
};

// Exemple de carte : Carte Platinium
class PlatinumCard : public Card {
public:
    int maxWithdrawal() const override {
        return 2000; // Exemple : montant maximum de retrait pour la carte Platinium
    }
};

// Exemple de carte : Carte Black
class BlackCard : public Card {
public:
    int maxWithdrawal() const override {
        return 5000; // Exemple : montant maximum de retrait pour la carte Black
    }
};

// Template générique pour le retrait
template<typename CardType>
class Withdrawal {
private:
    const CardType& creditCard;

public:
    Withdrawal(const CardType& card) : creditCard(card) {} 

    // Opérateur () surchargé pour effectuer le retrait
    void operator()(int amount) const {
        if (amount <= creditCard.maxWithdrawal()) {
            // Logique de retrait ici
            // Pour cet exemple, nous n'implémentons que l'affichage du montant retiré
            std::cout << "Retrait de " << amount << " euros effectué avec succès." << std::endl;
        } else {
            std::cout << "Montant de retrait supérieur au maximum autorisé pour cette carte." << std::endl;
        }
    }
};
