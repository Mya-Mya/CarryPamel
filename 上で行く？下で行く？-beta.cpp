#include"Frame.h"
#include<Windows.h>

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
	Frame MyFrame;
	MyFrame.init();
	MyFrame.doMainLoop();
	MyFrame.finalize();
    return 0;
}

