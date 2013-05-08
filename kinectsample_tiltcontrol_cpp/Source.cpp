#include <Windows.h>
#include <NuiApi.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	if( S_OK  == NuiInitialize(NUI_INITIALIZE_FLAG_USES_COLOR))
    {
        cout << "成功初始化\n" ;

        long degree = 0 ; 
        NuiCameraElevationGetAngle(&degree) ;

        cout << "目前角度: " << degree  << endl;

        degree = 20 ;
        NuiCameraElevationSetAngle(degree) ;

     }else
        cout << "初始化失敗\n" ;


    NuiShutdown() ;
    return 0;
}
