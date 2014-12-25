void printTitle(); 
// Pre: None;
// Pos: Print a Title about the function of the program and author

void menu();
// Pre: None;
// Pos: Print a menu of the function for user to choose

double getNum(); 
// Pre: None;
// Pos: Gets a number from the user and then validate the number. Clear all the rest garbage from the buffer

double getInRange(double a, double b); 
// Pre: B > = A;
// Pos: Gets in range of two values (A CANNOT BE LARGER THEN B);

double getPosNum(); 
// Pre: None;
// Pos: Gets a positive number from the user and then validate the number. 
//      Clear all the rest garbage from the buffer(uses getNum as slave)

double averageSet(double input); 
// Pre: None;
// Pos: Gets the average of a set

double getInt(); 
// Pre: None;
// Pos: Gets an int number from the user and then validate the number. 
//      Clear all the rest garbage from the buffer (uses getNum as slave)

char getLetter();
// Pre: None;
// Pos: Gets a letter, remove all the rest garbage from the buffer

void enterPrime();
// Pre: int number > 2
// Pos: Gets an int number who is larger than 2, remover all the rest garbage from the buffer

bool isPrime(int b);
// Pre: None;
// Pos: Judge a number is Prime or not

int getIntBiggerThan(double b);
// Pre: None;
// Pos: Gets a number > b, clear all the garbage from the buffer

void defPerfOrAbun(int i);
// Pre: None;
// Pos: Tell the user whether the number is Def or Prefect or Abundent

void printAsciiTable();
// Pre: None;
// Pos: Print a beautiful ascii table;