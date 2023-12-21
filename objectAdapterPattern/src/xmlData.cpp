#include<iostream>
using namespace std;

class XMLData{
    string xmlData;
    public:
      XMLData(string pXmlData)
      {
        xmlData = pXmlData;
      }
       
     string getXMLData()
     {
        return xmlData;
     }
};

class DataAnalyticsTool
{
    string jsonData;
    public:
    DataAnalyticsTool(){}
    DataAnalyticsTool(string pJsonData){
        jsonData = pJsonData;
    }
   virtual void analyseData()
    {
        cout<< "Analysing Data " << jsonData << endl;
    }
};

class Client
{
    public:
       void ProcessData(DataAnalyticsTool* tool)
       {
         tool->analyseData();
       }
};
class Adapter : public DataAnalyticsTool
{
    XMLData* xmlData;
    public:
      Adapter(XMLData* pXMLlData)
      {
        xmlData = pXMLlData;
      }
      void analyseData() {
        cout<<"converting XML data "<< xmlData->getXMLData() <<" to json data" << endl;
        cout<<"Analysing the coverted Json Data" << endl;
      }
};

int main()
{
    
    XMLData* xmlData = new XMLData("sample xml data"); 

    // DataAnalyticsTool* tool = new DataAnalyticsTool("json data"); here client should not bother
//but we dont have  json data  /so we will creat adaptar class  
    DataAnalyticsTool* tool = new Adapter(xmlData);
    Client* client = new Client;
    client->ProcessData(tool);
    
    return 0;


}