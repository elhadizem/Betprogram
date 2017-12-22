#include "betmanager.h"
#include <iostream> 

using namespace std; 

betManager* betManager::betInstance = 0;

betManager::~betManager(){
	if(betInstance) {
		delete betInstance;
		betInstance = 0; 
	}
}

betManager* betManager::getInstance() {
	if(!betInstance) {
		betInstance = new betManager(); 
		cout<<"i'm in !"<<endl;
	}
	return betInstance;
}
