#include <Windows.h>
#include <NuiApi.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if( S_OK  == NuiInitialize(NUI_INITIALIZE_FLAG_USES_COLOR))
    {
        cout << "���\��l��\n" ;

     }else
        cout << "��l�ƥ���\n" ;

	 //����Kinect���{���X��

    NuiShutdown() ;
    return 0;
}
