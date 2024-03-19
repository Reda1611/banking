#include "withdrawal.hpp"

using namespace std;

template<typename CardType>
void Withdrawal<CardType>::operator()(int amount) const {
    if (amount <= creditCard.maxWithdrawal()) {

      
        cout << "Retrait de " << amount << " euros effectué avec succès." << endl;
    } else {
        cout << "Montant de retrait supérieur au maximum autorisé pour cette carte." << endl;
    }
}

template class Withdrawal<GoldCard>;
template class Withdrawal<PlatinumCard>;
template class Withdrawal<BlackCard>;
