//
//  Integer.h
//  Lab 5
//
//  Created by Maxx Rodriguez on 4/22/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#ifndef __Lab_5__Integer__
#define __Lab_5__Integer__

#include <iostream>
#include "Literal.h"

class Integer : public Literal<int>
{
private:
    
public:
    Integer();
    virtual void print();

};

#endif /* defined(__Lab_5__Integer__) */
