//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Opros.res");
USEUNIT("..\MyCLASS\ClassArhiv.cpp");
USEFORM("..\code\FormOpros.cpp", PACQuery);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
         if (FindWindow("TPACQuery","������ ������")==NULL)
          {
            Application->Initialize();
            Application->CreateForm(__classid(TPACQuery), &PACQuery);
                 Application->Run();
          }
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
