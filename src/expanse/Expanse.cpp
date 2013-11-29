/* Copyright (c) 2013 https://github.com/Naftoreiclag/
 *
 * Distributed under the MIT License (referring to license referred to at http://opensource.org/licenses/mit-license.html)
 * See accompanying file LICENSE
 */

#include "Expanse.h"

exp::Expanse::Expanse()
: Node("Expanse", NT_EXPANSE, NULL)
{
    //ctor
}

exp::Expanse::~Expanse()
{
    //dtor
}

#ifdef DEBUG
#include <iostream>
void exp::Expanse::sayFoo()
{
    std::cout << "Foo!" << std::endl;
}
#endif
