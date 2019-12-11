#pragma once
#include "Node.h"
#include <iostream>
#include<string>
using namespace std;


class Tree
{
	Node* root;
	int count;

public:
	Tree();
	Tree(Node*& ptr);
	bool isEmpty();
	bool isNotEmpty();
	Tree& insert(Node*& ptr);
	void editWord(string existWord,string newWord);
	Node* removeWord(string word);
	void printInfixOrder();
	void setBookMark(string s1);
	Node* search(string s1);
	~Tree();
};
