#include<tchar.h>
#include<Windows.h>
int main()
{
	HWND hwnd = GetDesktopWindow();
	HDC hdc = GetWindowDC(hwnd);
	POINT point;
	while (1)
	{
		GetCursorPos(&point);
		DrawIcon(hdc, point.x + 25, point.y + 25, LoadIcon(NULL, IDI_QUESTION));
		DrawIcon(hdc, point.x + 50, point.y + 50, LoadIcon(NULL, IDI_WARNING));
		DrawIcon(hdc, point.x - 5, point.y - 5, LoadIcon(NULL, IDI_ERROR));
		DrawIcon(hdc, point.x - 30, point.y - 30, LoadIcon(NULL, IDI_INFORMATION));
		DrawIcon(hdc, point.x - 60, point.y - 60, LoadIcon(NULL, IDI_WARNING));
		Sleep(1);


	}
}
