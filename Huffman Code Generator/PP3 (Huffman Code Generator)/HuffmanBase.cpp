#include "HuffmanBase.hpp"

// Implementation of HuffmanNode member functions

char HuffmanNode::getCharacter() const {
    return character;
}

size_t HuffmanNode::getFrequency() const {
    return frequency;
}

bool HuffmanNode::isLeaf() const {
    return left == nullptr && right == nullptr;
}

bool HuffmanNode::isBranch() const {
    return !isLeaf();
}

bool HuffmanNode::isRoot() const {
    return parent == nullptr;
}

bool HuffmanNode::Compare::operator()(const HuffmanNode &n1, const HuffmanNode &n2) const {
    return lessThan ? n1.frequency < n2.frequency : n1.frequency > n2.frequency;
}

bool HuffmanNode::Compare::operator()(const HuffmanNode *n1, const HuffmanNode *n2) const {
    return lessThan ? n1->frequency < n2->frequency : n1->frequency > n2->frequency;
}

// Implementation of HuffmanTreeBase member functions 


std::string HuffmanTreeBase::compress (const std::string inputStr) {
    
    return "";
}

std::string HuffmanTreeBase::serializeTree() const {
    
    return "";
}

std::string HuffmanTreeBase::decompress(const std::string inputCode, const std::string serializedTree) {
    
    return "";
}

