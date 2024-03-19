#include <iostream>
#include <memory>
#include "models.hpp"
#include "services.hpp"
#include "withdrawal.hpp"

using namespace std;

int main() {

  auto bank = make_bank();


  auto client = make_shared<Client>("John Doe", "123456", bank.get());


  bank->createAccount(client);


  auto card = make_unique<GoldCard>(); 
    bank->assignCard(client, move(card));


  Withdrawal<GoldCard> withdrawal(*client->getAccount()->getCard());
    withdrawal(500); 
  
    return 0;
}
