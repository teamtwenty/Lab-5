//
//  Token.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Token__
#define __Lab4__Token__

#include <iostream>
#include "common.h"
#include "LineNumberList.h"



using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Token
{
private:
    TokenCode code;

    string tokenString;
    //What variables and methods am I missing to implement a binary tree.
    Token *leftChild;
    Token *rightChild;
    LineNumberList *list;
    
public:
    Token();
    ~Token();
    void setCode(TokenCode newCode);
    TokenCode getCode();

    void setTokenString(string s);
    string getTokenString();
    void setLeftChild(Token *tok);
    Token *getLeftChild();
    void setRightChild(Token *tok);
    Token *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();
    
    virtual void print();
    
    //get rid of literals and make templates
    
    
};

#endif /* defined(__Lab4__Token__) */
