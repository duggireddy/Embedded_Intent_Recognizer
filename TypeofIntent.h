#ifndef INTENT_TYPE_H
#define INTENT_TYPE_H 
#include <string>
#include <vector>

using namespace std;

/*
To change the clues, edit the the relevant vector values 
*/

static vector<string> weather{"climate","weather","atmosphere","humidity", "forecast"};
static vector<string> fact{"funny","something", "surprise","interesting", "truth" "tell"};
static vector<string> timing{"morning","afternoon", "evening","today", "tomorrow", "yesterday"};
static vector<string> expectedTime{"next", "last", "on", "at"};


class CIntentType
{
private:
    string m_vtype;
    string m_vcity;
    string m_vtime;


    
public:
    CIntentType(const string & strSentence);
    ~CIntentType();
    string getType();
    string getCity();
    string getTime();
    static vector<string> IntentOutput(const vector<string> & words);
    static vector<string> StringToWords(const string & strInput);
    

};




#endif //INTENT_TYPE_H
