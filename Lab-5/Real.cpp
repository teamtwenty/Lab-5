//
//  Real.cpp
//  Lab 5
//
//  Created by Maxx Rodriguez on 4/22/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "Real.h"

Real::Real() : Literal<double>(0.0)
{
  
}
void Real::print()
{
    cout << "   >> NUMBER>" << this->getLiteral() << " (real)\n";

}