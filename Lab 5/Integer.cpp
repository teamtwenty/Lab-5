//
//  Integer.cpp
//  Lab 5
//
//  Created by Maxx Rodriguez on 4/22/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "Integer.h"
#include "Literal.h"

class Integer : public Literal<int>
{
    Integer(): Literal<int>(0)
    {
        
    }
};