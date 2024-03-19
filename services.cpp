#include "services.hpp"
#include "models.hpp" 

using namespace std;

unique_ptr<Bank> make_bank() {
    return make_unique<Bank>();
}
