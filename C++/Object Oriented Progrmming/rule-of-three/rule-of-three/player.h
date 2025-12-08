

class Player {
	char* name;
	char* position;
	char** skills; //dynamic array of dynamic strings ..here 3 strings for this program

public:
	//constructor
	Player(const char* name, const char* position, const char* skill_1, const char* skill_2, const char* skill_3);

	//copy constructor
	Player(const Player& src);

	//copy assignment operator
	Player& operator=(const Player& src);

	//Destructor
	~Player();

	void display();

};
