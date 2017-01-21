#include <iostream>
using namespace std;

class Enemy{
public:
	virtual void attack(){
		cout << "I am the enemy class" <<endl;
	}

	//Enemy class is now an abstract class with pure virtual function
	virtual void move() = 0; //example of a pure virtual function, makes class an abstract class
};

class Ninja : public Enemy{
public:
	void attack(){
		cout << "Ninja Attack!" << endl;
	}

	//pure virtual function MUST be overrriden
	void move(){
		cout << "Ninja is moving" <<endl;
	}
};

class Monster : public Enemy{
public:
	void attack(){
		cout << "Monster Attaack!" << endl;
	}

	//pure virtual function MUST be overrriden
	void move(){
		cout << "Monster is moving" <<endl;
	}
	
};


int main(){

	Ninja n;
	Monster m;
	//no Enemy objects. Once it is declared as an abstract class (by containing at least one virtual function) no objects can be instantiated
	//Enemy e; 

	Enemy* enemy1 = &n;
	Enemy* enemy2 = &m;
	

	enemy1->attack();
	enemy2->attack();
	enemy1->move();
	enemy2->move();
	
	

	system("pause");
}