#include<iostream>
#include<string>
#include<map>

using namespace std;
int main()
{
	map <string, int> populationMap;
	
	populationMap.insert(pair<string, int>("MH", 112));
	populationMap.insert(pair<string, int>("UP", 223));
	populationMap.insert(pair<string, int>("AP", 334));
	populationMap.insert(pair<string, int>("GJ", 445));
	
	map<string,int>::iterator iter = populationMap.end();
	
	cout<<"Size of population map:"<<populationMap.size()<<"\n";
	
	for(iter=populationMap.begin(); iter!= populationMap.end(); ++iter)
	{
		cout<<iter->first<<":"<<iter->second<<"million\n";
	}
	
	string state;
	cout<<"\nEnter the state:";
	cin>>state;
	
	iter = populationMap.find(state);
	if(iter!=populationMap.end())
		cout<<state<<" population is:"<<iter->second<<" million\n";
		
	else
		cout<<"Key is not in the population map";
		
	return 0;
}
