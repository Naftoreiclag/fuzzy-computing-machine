#include "Lexicographer.h"

#include "Dictionary.h"
#include "Grammar.h"

#include "WordNoun.h"
#include "WordAdjunct.h"
#include "WordModifier.h"

void Lexicographer::graph()
{
    // Na-Ooh-Nu-S
    Dictionary::addNoun(new WordNoun("erroneous"));
    Dictionary::addNoun(new WordNoun("fish", "fish"));
    Dictionary::addNoun(new WordNoun("cupcake"));
    Dictionary::addNoun(new WordNoun("bunny"));
    Dictionary::addNoun(new WordNoun("egg"));
    Dictionary::addNoun(new WordNoun("mouse", "mice"));
    Dictionary::addNoun(new WordNoun("cookie"));
    Dictionary::addNoun(new WordNoun("potato"));
    Dictionary::addNoun(new WordNoun("sheep", "sheep"));
    Dictionary::addNoun(new WordNoun("couch"));
    Dictionary::addNoun(new WordNoun("sock"));
    Dictionary::addNoun(new WordNoun("shoe"));
    Dictionary::addNoun(new WordNoun("tomato"));

    // Adjuncts
    Dictionary::addAdjunct(new WordAdjunct("above", gmr::above));
    Dictionary::addAdjunct(new WordAdjunct("below", gmr::below));

    // Meaningless modifiers
    Dictionary::addArticle("a", gmr::indefinite, gmr::solo);
    Dictionary::addArticle("an", gmr::indefinite, gmr::solo);
    Dictionary::addArticle("some", gmr::indefinite, gmr::muchos);
    Dictionary::addArticle("the", gmr::definite, gmr::solo);
    Dictionary::addArticle("this", gmr::definite, gmr::solo);
    Dictionary::addArticle("that", gmr::definite, gmr::solo);
    Dictionary::addArticle("these", gmr::definite, gmr::muchos);
    Dictionary::addArticle("those", gmr::definite, gmr::muchos);
}

Lexicographer::Lexicographer()
{
}
