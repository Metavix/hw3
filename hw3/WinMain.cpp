#include <Windows.h>

int CALLBACK WinMain(
	HINSTANCE hIntance,
	HINSTANCE hPrevInstance,
	LPSTR	  lpCMdLine,
	int		  nCmdShow)
{
	const auto pClassName = "hw3dMeta";
	// register window class
	WNDCLASSEX  wc = {0};
	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = DefWindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hIntance;
	wc.hIcon = nullptr;
	wc.hCursor = nullptr;
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = pClassName;
	wc.hIconSm = nullptr;
	RegisterClassEx(&wc);
	// create window instance
	return 0;
}