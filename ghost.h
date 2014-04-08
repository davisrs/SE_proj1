//ghost class
class Ghost{
	public
		void setGoodEvil(int g);
		void printGhost();
		void setGhostPlayer(Player P);
		void printGhostType();
		//See handout
		//1. a default constructor that creates a ghost for a null player that is good and has
		//not been captured
		//2. an overloaded constructor that has three arguments: (p, g, c) p is a player, g
		//represents good or evil, and c represents captured or not captured.
		//3. a destructor that recycles any memory that was allocated to the object
		//4. a method void display_player () displays the ghost’s player
		//5. a method player get_player() that gets the ghost’s player
		//6. a method bool goodevil() that gets the good or evil status of the ghost (true =
		//good, false = evil)
		//7. a method bool captured() that gets the captured/not captured status of the ghost
		//(true = captured, false = not captured)
		//8. a method void capture() that sets the captured status of the ghost to true (i.e.
		//captured)
		//9. a method display_me() that displays the ghosts total status: player, captured/not,
		//good/evil
		//10. an overloaded assignment operator for the class Ghost.
	private
		int isGoodEvil;
		bool isCaptured;
		Player PlayerGhostPlayer;//requires player to be defined 1st!
}
