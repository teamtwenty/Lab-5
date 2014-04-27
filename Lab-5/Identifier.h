
#ifndef __Lab_5__Identifier__
#define __Lab_5__Identifier__

#include <iostream>
#include "Token.h"

using namespace std;

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

#endif