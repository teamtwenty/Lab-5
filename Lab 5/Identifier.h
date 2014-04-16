#include <iostream>
#include "Token.h"

class Identifier : public Token
{
  private:
    Identifier *leftChild;
    Identifier *rightChild;
  
  public:
    Identifier();
    ~Identifier();
    Identifier* getRightChild();
    Identifier* getLeftChild();
    void setLeftChild(Identifier *tok);
    void setRightChild(Identifier *tok);
    
    
};
