#include <Windows.h>
#include <NuiApi.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	if( S_OK  == NuiInitialize(NUI_INITIALIZE_FLAG_USES_COLOR))
    {
        cout << "���\��l��\n" ;

        long degree = 0 ; 
        NuiCameraElevationGetAngle(&degree) ;

        cout << "�ثe����: " << degree  << endl;

        degree = 20 ;
        NuiCameraElevationSetAngle(degree) ;

     }else
        cout << "��l�ƥ���\n" ;


    NuiShutdown() ;
    return 0;
}
