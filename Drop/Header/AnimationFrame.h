namespace Drop
{
	struct AnimationFrame
	{
	public:
		AnimationFrame(int delayInFrames, int positionX, int positionY, int width, int height);

		~AnimationFrame(void);

		int GetDelayInFrames(void);

		int GetPositionX(void);

		int GetPositionY(void);

		int GetWidth(void);
		
		int GetHeight(void);

	private:
		int delayInFrames;

		int positionX;

		int positionY;

		int width;

		int height;
	};
}