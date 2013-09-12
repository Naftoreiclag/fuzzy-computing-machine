#include "Dictionary.h"

#include <string>
#include <vector>
#include <map>

#include "WordNoun.h"
#include "WordAdjunct.h"
#include "WordModifier.h"
#include "Grammar.h"

// We will never instantiate you
Dictionary::Dictionary() {}

// =====
// Nouns
// =====

// Vector
std::vector<WordNoun*> Dictionary::registeredNouns;

// Add
gmr::NounId Dictionary::addNoun(WordNoun* newNoun)
{
    registeredNouns.push_back(newNoun);

    return registeredNouns.size() - 1;
}

// Get
WordNoun* Dictionary::getNoun(gmr::NounId nounId)
{
    return registeredNouns.at(nounId);
}

// Number of
std::size_t Dictionary::numNouns()
{
    return registeredNouns.size();
}

// ========
// Adjuncts
// ========

// Vector
std::vector<WordAdjunct*> Dictionary::registeredAdjuncts;

// Add
gmr::AdjunctId Dictionary::addAdjunct(WordAdjunct* newAdjunct)
{
    registeredAdjuncts.push_back(newAdjunct);

    return registeredAdjuncts.size() - 1;
}

// Get
WordAdjunct* Dictionary::getAdjunct(gmr::AdjunctId adjunctId)
{
    return registeredAdjuncts.at(adjunctId);
}

// Number of
std::size_t Dictionary::numAdjuncts()
{
    return registeredAdjuncts.size();
}

// =========
// Modifiers
// =========

// Vector
std::vector<WordModifier*> Dictionary::registeredModifiers;

// Add
gmr::ModifierId Dictionary::addModifier(WordModifier* newModifier)
{
    registeredModifiers.push_back(newModifier);

    return registeredModifiers.size() - 1;
}

// Get
WordModifier* Dictionary::getModifier(gmr::ModifierId modifierId)
{
    return registeredModifiers.at(modifierId);
}

// Number of
std::size_t Dictionary::numModifiers()
{
    return registeredModifiers.size();
}

// ========
// Articles
// ========

// Vector
std::map<std::string, gmr::ArticleType> Dictionary::registeredArticles;

// Add by name
void Dictionary::addArticle(std::string name, gmr::ArticleType type)
{
    registeredArticles.insert(std::pair<std::string, gmr::ArticleType>(name, type));
}

// Get by name
gmr::ArticleType Dictionary::getArticle(std::string name)
{
    std::map<std::string, gmr::ArticleType>::iterator focus = registeredArticles.find(name);

    if(focus == registeredArticles.end())
    {
        // Dis is broken fix me
        return gmr::arroneous;
    }

    return focus->second;
}
