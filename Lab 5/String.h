//
//  String.h
//  Lab 5
//
//  Created by Maxx Rodriguez on 4/22/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#ifndef __Lab_5__String__
#define __Lab_5__String__

#include <iostream>
#include "Literal.h"

class String : public Literal<string>
{
private:
    
public:
    String();
    virtual void print();
};

#endif /* defined(__Lab_5__String__) */
