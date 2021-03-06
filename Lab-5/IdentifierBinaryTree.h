//
//  IdentifierBinaryTree.h
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

#ifndef __Lab4__IdentifierBinaryTree__
#define __Lab4__IdentifierBinaryTree__

#include <iostream>
#include "Identifier.h"

class IdentifierBinaryTree
{
    Identifier *treeRoot;
    
    void depthFirstDeleteTree(Identifier *ident);
    
    
public:
    IdentifierBinaryTree();
    ~IdentifierBinaryTree();
    void setTreeRoot(Identifier *ident);
    Identifier *getTreeRoot();
    bool addIdentifier(Identifier *ident, int lineNum);
};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
