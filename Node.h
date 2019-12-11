#pragma once
#include <string>
#include <iostream>

using namespace std;

class Node
{
private:
	string word,synonym,defination;

public:
	Node* leftptr, * rightptr;
	Node();
	Node(string word, string synonym, string defination);
	void setWord(string word);
	void setSynonym(string synOfWord);
	void editWord(string s1);
	string getWord();
	string getSynonym();
	string getDefinition();
	void printWord();
};
