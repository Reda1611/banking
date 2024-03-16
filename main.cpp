#include "models.hpp"
#include "withdrawal.hpp"
#include "services.hpp"

int main() {
    // Création de la banque
    std::unique_ptr<Bank> bank = make_bank();

    // Création d'un client
    std::shared_ptr<Client> client = std::make_shared<Client>("John", "password", bank.get());

    // Création d'un compte pour le client
    bank->createAccount(client);

    // Autres opérations bancaires...
    
    return 0;
}
