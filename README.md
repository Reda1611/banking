# banking

ce programme consiste à :

Définir les classes nécessaires pour un système bancaire, telles que Bank, Client, Account, Card, etc.

Utiliser la fonction make_bank() pour créer une instance de la classe Bank.

Effectuer des opérations bancaires telles que la création de comptes, l'attribution de cartes, le retrait d'argent, etc., 

Utiliser les classes de carte définies dans withdrawal.hpp pour déterminer les montants maximaux de retrait et de crédit pour chaque type de carte, et pour effectuer des opérations de retrait avec ces cartes.

Utiliser les classes utilisateur telles que Client et Advisor pour représenter les utilisateurs du système bancaire et effectuer des opérations spécifiques, comme attribuer un conseiller à un client ou vérifier les informations d'identification d'un utilisateur.


models.hpp : Définit les classes de base pour un système bancaire, telles que la banque, les comptes, les utilisateurs, les conseillers et les distributeurs automatiques de billets.

withdrawal.hpp : Définit des classes pour différents types de cartes de crédit et une classe de modèle pour simuler des opérations de retrait avec ces cartes.

services.hpp : Définit une fonction make_bank() pour créer une instance de la classe Bank dans le système bancaire.


1. models.hpp
La classe Bank a été modifiée pour inclure une fonction withdraw qui accepte n'importe quel type de carte en utilisant un modèle générique. Cette fonction utilise un objet Withdrawal pour effectuer le retrait en fonction de la carte associée au client.

La classe Account a été modifiée pour inclure une méthode getCard permettant d'accéder à la carte associée à un compte.

La classe Client a été modifiée pour inclure une méthode getAccount permettant d'accéder au compte associé à un client.

2. services.hpp
Une fonction make_bank a été ajoutée pour créer une instance de la classe Bank et la retourner comme un unique_ptr.
3. withdrawal.hpp
Une interface abstraite Card a été définie avec une méthode virtuelle maxWithdrawal pour obtenir le montant maximum de retrait autorisé pour une carte.

Trois classes concrètes GoldCard, PlatinumCard et BlackCard ont été définies pour implémenter cette interface en retournant le montant maximum de retrait spécifique à chaque type de carte.

Un template Withdrawal a été défini pour accepter n'importe quel type de carte. Ce template utilise un opérateur () surchargé pour effectuer un retrait en vérifiant si le montant demandé est inférieur ou égal au montant maximum autorisé pour la carte.
