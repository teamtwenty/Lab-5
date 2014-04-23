//
//  Literal.h
//  Lab 5
//
//  Created by Maxx Rodriguez on 4/22/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#ifndef __Lab_5__Literal__
#define __Lab_5__Literal__

#include <iostream>
#include "Token.h"

template <typename NewType>
class Literal : public Token
{
private:
    NewType newLit;
    
public:
	Literal(NewType lit){ setLiteral(lit); }
	~Literal(){};
	void setLiteral(NewType lit){ newLit = lit;}
	NewType getLiteral(){ return newLit; };
    virtual void print() = 0;

    
};

#endif /* defined(__Lab_5__Literal__) */
