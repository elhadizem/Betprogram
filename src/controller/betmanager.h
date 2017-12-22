#ifndef BETMANAGER_H
#define BETMANAGER_H

/* is singleton */
class betManager { 
	static betManager* betInstance; 
public:
	static betManager* getInstance();
	~betManager(); 
};

#endif 
