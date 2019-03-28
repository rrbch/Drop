namespace Drop
{
	struct Position
	{
	public:
		Position(int x, int y);

		~Position(void);

		int GetX(void);

		int GetY(void);

	private:
		int X;

		int Y;
	};
}