class controlEngine
{
  public:
    controlEngine(int rearEngineON,int rearEngineD,int frontEngineON,int frontEngineD,int STOP);
    void forward();
    void backward();
    void left();
    void right();
    void stopFront();
    void stopRear();
  private:
    int _rearEngineON;
    int _rearEngineD;
    int _frontEngineON;
    int _frontEngineD;
   };