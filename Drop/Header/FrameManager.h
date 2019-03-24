namespace Drop
{
	class FrameManager
	{
	public:
		FrameManager(int framesPerSecond);

		~FrameManager(void);

		void StartNewFrame(void);

		int GetFramesPerSecond(void);

	private:
		const int millisecondsPerSecond = 1000;

		int framesPerSecond;

		int nonAttributableSecondFraction;

		int desiredFrameDuration;

		int frameCount;

		int frameStart;

		int millisecondsSinceLastSecond;

		void InitializeFields(int framesPerSecond);

		int CalculateDesiredFrameDuration(int framesPerSecond);

		int CalculateNonAttributableSecondFraction(int millisecondsPerSecond, int framesPerSecond);

		int CalculateFrameWorkDuration(int frameStart);

		int CalculateRemainingFrameDuration(int frameDuration);

		int CalculateTotalFrameDuration(int frameWorkDuration, int remainingFrameDuration);

		void SetStartOfNewFrame(int lastFrameDuration);

		void IncreaseFrameCount(void);

		void ProceedSecond(int frameDuration);

		void UpdateFramesPerSecond(void);

		bool IsSecondElapsed(int elapsedMilliseconds);

		int CalculateSecondsElapsed(int elapsedMilliseconds);

		void ResetFrameCount(void);

		void ResetMillisecondsSinceLastSecond(void);

		bool AreSecondsElapsed(int elapsedMilliseconds);

		void SleepForRemainingFrameDuration(int frameDuration);
	};
}