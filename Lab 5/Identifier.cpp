#include "Identifier.h"

Identifier:: Identifier()
{
  
}

Identifier:: ~Identifier()
{

}
void Identifier::setLeftChild(Identifier *tok)
{
    this->leftChild = tok;
}
Identifier* Identifier::getLeftChild()
{
    return this->leftChild;
}
void Identifier::setRightChild(Identifier *tok)
{
    this->rightChild = tok;
}
Identifier* Identifier::getRightChild()
{
    return this->rightChild;
}