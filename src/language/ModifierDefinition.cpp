/* Copyright (c) 2013 https://github.com/Naftoreiclag/
 *
 * Distributed under the MIT License (referring to license referred to at http://opensource.org/licenses/mit-license.html)
 * See accompanying file LICENSE
 */

#include "ModifierDefinition.h"

#include <string>

std::string ModifierDefinition::getForm()
{
    return form;
}

ModifierDefinition::ModifierDefinition(std::string form)
: form(form)
{
}
