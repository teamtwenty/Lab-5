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

template <typename NewLiteral>


class Literal : public Token
{
private:
    NewLiteral newLit;
    
public:
	Literal(NewLiteral lit){ setLiteral(lit); }
	~Literal(){};
	void setLiteral(NewLiteral lit){ newLit = lit;}
	NewLiteral getLiteral(){ return newLit; };
    virtual void print() = 0;

    
};

#endif /* defined(__Lab_5__Literal__) */
