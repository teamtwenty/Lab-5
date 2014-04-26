//
//  Integer.cpp
//  Lab 5
//
//  Created by Maxx Rodriguez on 4/22/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "Integer.h"


Integer::Integer() : Literal<int>(0)
{

}
void Integer::print()
{
   cout << "  >> <NUMBER>" << this->getLiteral() << " (integer)\n";
}


//what are you trying to use sprintf for?
//cant you just use regular printf?
//printf uses a different library form iostream
//iostream only has cin and cout

