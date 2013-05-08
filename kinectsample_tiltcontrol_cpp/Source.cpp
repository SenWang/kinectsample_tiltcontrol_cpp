#include <Windows.h>
#include <NuiApi.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if( S_OK  == NuiInitialize(NUI_INITIALIZE_FLAG_USES_COLOR))
    {
        cout << "成功初始化\n" ;

     }else
        cout << "初始化失敗\n" ;

	 //控制Kinect的程式碼於此

    NuiShutdown() ;
    return 0;
}
