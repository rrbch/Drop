namespace Drop
{
	class Game
	{
	public:
		Game(void);

		~Game(void);

	private:
		void InitializeSDL(void);

		void TerminateSDL(void);
	};
}