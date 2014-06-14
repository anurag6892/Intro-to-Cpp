#include<iostream>
#include<string>

using namespace std;

string pigLatinify(string s){

const char vowels[] = {'a', 'e', 'i', 'o', 'u'};

s += "-";

string result;

for (int i = 0; i < 5; i++){ 
	if (s.find(vowels[i]) == 0){ return result = s + "way"; break; }

}

if (s.find("qu") == 0) return result = s.substr(2, s.size() - 2) + "qu" + "ay";

return s.substr(1, s.size() - 1) + s.substr(0,1) + "ay"; 

}


int main(){

cout << pigLatinify("anurag") << endl;

return 0;

}


