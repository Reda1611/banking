Programme de gestion bancaire
Ce programme est une application de gestion bancaire conçue pour créer des comptes clients, attribuer des cartes et effectuer des retraits.

Fonctionnalités principales
Création de comptes clients : Le programme permet de créer des comptes clients en associant un utilisateur à une banque.

Attribution de cartes : Une fois un compte client créé, le programme permet d'attribuer une carte à ce compte. Les cartes peuvent être de différents types (Gold, Platinum, Black) avec des limites de retrait spécifiques.

Retraits : Le programme permet d'effectuer des retraits d'argent à partir des comptes clients. Le montant des retraits est vérifié par rapport à la limite de retrait autorisée pour la carte associée au compte client.

Structure du programme
Le programme est divisé en plusieurs fichiers :

models.hpp / models.cpp : Ces fichiers contiennent les définitions des classes représentant les entités du programme, telles que la banque, les clients, les cartes, etc.

services.hpp / services.cpp : Ces fichiers contiennent des fonctions utilitaires pour créer des instances de la banque et effectuer d'autres opérations de service.

withdrawal.hpp / withdrawal.cpp : Ces fichiers contiennent le template générique pour effectuer des retraits d'argent.

main.cpp : Ce fichier contient la fonction principale du programme qui utilise les différentes fonctionnalités implémentées pour simuler les opérations bancaires.

Utilisation
Pour utiliser le programme, compilez tous les fichiers sources (*.cpp) ensemble. Ensuite, exécutez le fichier binaire généré pour lancer l'application. Suivez les instructions à l'écran pour interagir avec le programme, telles que la création de comptes, l'attribution de cartes et les retraits d'argent.
