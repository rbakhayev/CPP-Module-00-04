#include "Brain.hpp"

// Costruttore di default
Brain::Brain()
{
    std::cout << "Costruttore di Brain chiamato" << std::endl;
}

// Costruttore di copia
Brain::Brain(const Brain &other)
{
    std::cout << "Costruttore di copia di Brain chiamato" << std::endl;
    *this = other;
}

// Operatore di assegnazione
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Operatore di assegnazione di Brain chiamato" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

// Distruttore
Brain::~Brain()
{
    std::cout << "Distruttore di Brain chiamato" << std::endl;
}
