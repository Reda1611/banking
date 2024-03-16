#include "models.hpp"
#include "withdrawal.hpp"
#include "services.hpp"

int main() {

    std::unique_ptr<Bank> bank = make_bank();


    std::shared_ptr<Client> client = std::make_shared<Client>("John", "password", bank.get());


    bank->createAccount(client);


    
    return 0;
}
