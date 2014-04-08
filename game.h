//game class
class Game
{
	public
		Game();	//a default constructor that creates a object that has an empty board.
			//a destructor that recycles any memory that was allocated to the object
			//a method display_board() displays the current board (ghosts, where they are, and
			//	whose they are but NOT the good/evil status of them) on the screen
			//show_pieces_captured() that displays the pieces that have been
			//	captured – whose pieces they are and whether each is good or evil. Does the
			//	Game class need a data member to hold those Ghosts that have been captured?
			//	What would be a good way to represent this? You will want methods to deal with
			//	this!!
			//move(player p, ghost g, position)
		int evaluate();//a method evaluate() that determines whether or not someone has won.
		void placeGhost(int row, int col, bool goodEvil, Player p);
		bool checkGhost(int row, int col);
		void exitBoard(Player p, Ghost &g);
		void chooseGhostPlayer(Player p);
		void capture(Ghost &g, Ghost &g2);
		void genLineUp(Player p);
		bool compMove(Player P, Ghost G, int row, int col);//not used -- no AI
	private
		Ghost** board;//requires Ghost to be defined
		//you might consider
		//making the board represented using a two dimensional array of Ghost objects. Each
		//Ghost object could then be represented by which player it belongs to (Player A or
		//Player B, say), whether it is good or evil, and whether it is captured or not. Some
		//way of representing an empty square on the board needs to be devised.
		//Remember that as the game is played, the number of “real” Ghosts on the board will
		//be changing, and you will need to keep track of what Ghosts have been captured.
}
