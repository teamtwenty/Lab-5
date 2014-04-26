//
//  String.cpp
//  Lab 5
//
//  Created by Maxx Rodriguez on 4/22/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "String.h"

String::String(): Literal<string>("")
{
    
}
void String::print()
{
    cout << "    >> <STRING>" << this->getLiteral() << "\n";
}