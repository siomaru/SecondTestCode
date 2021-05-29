#include<DxLib.h>
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	DxLib::SetGraphMode(640, 360, 32);
	DxLib::ChangeWindowMode(true);
	DxLib::SetWindowText("2016037_éRâ∫„ƒê¢");
	if (DxLib_Init())
	{
		return-1;
	}
	DrawBox(30, 60, 60, 240, 0xFFFFF, true);
	DxLib::SetDrawScreen(DX_SCREEN_BACK); 
	while (DxLib::ProcessMessage() == 0) 
	{ DxLib::ScreenFlip(); }
	return 0;
}