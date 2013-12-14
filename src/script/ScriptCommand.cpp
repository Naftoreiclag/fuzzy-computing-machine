/* Copyright (c) 2013 "Naftoreiclag" https://github.com/Naftoreiclag
 *
 * Distributed under the MIT License (http://opensource.org/licenses/mit-license.html)
 * See accompanying file LICENSE
 */

#include "ScriptCommand.h"

using namespace script;

ScriptCommand::ScriptCommand(CommandFunction func)
: Script(),
function(func)
{
}

ScriptCommand::~ScriptCommand()
{
}

ScriptCommand::execute(int a, int b)
{
    function(a, b);
}
