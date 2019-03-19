namespace Drop
{
	class FrameManager
	{
	public:
		FrameManager(int framesPerSecond);

		~FrameManager(void);

		void StartNewFrame(void);

	private:
		const int millisecondsPerSecond = 1000;

		int framesPerSecond;

		int desiredFrameDuration;

		int frameStart;

		int CalculateDesiredFrameDuration(int framesPerSecond);

		int CalculateFrameWorkDuration(int frameStart);

		int CalculateRemainingFrameDuration(int frameDuration);

		void SetStartOfNewFrame(int lastFrameDuration);

		void SleepForRemainingFrameDuration(int frameDuration);
	};
}