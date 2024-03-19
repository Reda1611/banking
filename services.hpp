#pragma once

#include <memory>
#include "models.hpp" // Ajout de l'inclusion du fichier models.hpp

// Fonction pour créer une instance de la classe Bank et la retourner comme un unique_ptr
std::unique_ptr<Bank> make_bank() {
    return std::make_unique<Bank>();
}

