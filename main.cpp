#include "Textbook.h"
#include "main.h"
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, command> commandMap;

bool quit(vector<string> args){
	cout << "Quiting..." << endl;
	return false;	
}

void setup(){
	commandMap["quit"] = quit;
}

int main(){
	setup();
	/*
	vector<int> rudinProblems;
	rudinProblems.push_back(20);
	rudinProblems.push_back(30);
	rudinProblems.push_back(25);
	rudinProblems.push_back(26);
	rudinProblems.push_back(29);
	rudinProblems.push_back(19);
	rudinProblems.push_back(26);
	rudinProblems.push_back(29);
	rudinProblems.push_back(31);
	rudinProblems.push_back(32);
	rudinProblems.push_back(18);

	Textbook rudin("rudin", 11, rudinProblems);
	vector<int> chapters;

	for(int i = 1; i <= 11; ++i){
		chapters.push_back(i);
	}
	
	rudin.getShuffle(chapters);

	*/
	toolLoop();
}

void toolLoop(){
	string line;
	bool status = true;
	while(status){
		cout << "> ";
		cin >> line;
		status = executeCommand(line);
	}
}

bool executeCommand(string line){
	vector<string> parsed = parseCommand(line);
	if(parsed.size() == 0){
		cout << "Parse error..." << endl;
		return true;
	}
	return (commandMap.find(parsed[0])->second)(parsed);
}

vector<string> parseCommand(string line){
	vector<string> output;
	output.push_back(line);
	return output;
}
