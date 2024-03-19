#pragma once

#include <memory>
#include "models.hpp" 


std::unique_ptr<Bank> make_bank() {
    return std::make_unique<Bank>();
}

