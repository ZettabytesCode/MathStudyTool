#include <string>
#include <vector>
#include <functional>

using namespace std;

typedef function<bool(vector<string>)> command;

void setup();
void toolLoop();
bool executeCommand(string line);
vector<string> parseCommand(string line);
