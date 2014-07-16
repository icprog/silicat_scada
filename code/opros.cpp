//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "opros.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        const_time_out=60;
        const_time_out_query=5;
        QListTags->Open();
        Lic=100;
        Arhiv                = new MyArhiv(this,Lic,1000);
        Arhiv->OnActiveArhiv = InitArhiv;
        Arhiv->ActiveWrite   = true     ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::InitArhiv(TObject *Sender, bool &Active, int *IDTag, double *Val, int *Stat)
{
 if (!QListTags->Active) Active=false;
 else
  {
   if (!QListTags->Bof) QListTags->First();
   int sm =0;
   while (!QListTags->Eof)
    {
     if (QListTagsIDTag->AsInteger<Lic) // CountActiveTags)
      {
       IDTag[sm]=QListTagsIDTag->AsInteger    ;
       Val[sm]  =QListTagsValueTag->AsFloat   ;
       Stat[sm] =QListTagsStatusTag->AsInteger;
       sm++;
       if (sm>Arhiv->CountTags) break;
      }
     QListTags->Next();
    }
   Active=true;
  }
}


//-------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
 static unsigned int time_out=0 ;//����-��� �� �������������� ���������� � ������ ��������� ����==1���.
 static unsigned int time_out_query=3;//���� ��� �������
 static unsigned int num_zap=0;
  // ����� ����������
 Timer1->Enabled=false;
 // ����� ��� � �������
 try
  {
   // ����� ���������� ������������� ����������
   if (ClientSocket1->Socket!=NULL)
    if (ClientSocket1->Socket->Connected) // ���������� �����������
     {
      time_out_query++;
      if ((time_out_query%const_time_out_query)==1)
       {
        SendCommand(num_zap,0);
       }
      if (time_out_query==const_time_out_query) time_out_query=0;
     }
    else // ��� ����������
     {
      time_out++;
      if ((time_out%const_time_out)==1)
       {
        ClientSocket1->Open();
       }
      if (time_out==const_time_out) time_out=0;
     }
    else{
      int pc=0;
    }
  }
 catch (...) { }
 Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
void TForm1::SendCommand(int numCom, float val){
        
        tmpbuf.st.start[0]=1;
        tmpbuf.st.start[1]=1;
        tmpbuf.st.start[2]=1;
        tmpbuf.st.start[3]=1;
        tmpbuf.st.start[4]=1;
        tmpbuf.st.value=val;

        switch(numCom){
        case 0://������ ��������
                tmpbuf.st.i_command='r';//������� �� ������ ����������
                break;
        case 20://������������� ���������� �������
                tmpbuf.st.i_command='i';
                break;
        case 21://������������� �������������
                tmpbuf.st.i_command='m';
                break;
        case 22://������������� ������������������
                tmpbuf.st.i_command='p';
                break;
        }
        ClientSocket1->Socket->SendBuf(tmpbuf.buf,10);
}

void __fastcall TForm1::ClientSocket1Connect(TObject *Sender,
      TCustomWinSocket *Socket)
{
 int i=0;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocket1Disconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
 int i=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocket1Lookup(TObject *Sender,
      TCustomWinSocket *Socket)
{
 int i=0;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocket1Write(TObject *Sender,
      TCustomWinSocket *Socket)
{
 int i=0;        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ClientSocket1Read(TObject *Sender,  //����������
      TCustomWinSocket *Socket)
{

 unsigned char buf[129];
 int           bytes=0;
 bytes=Socket->ReceiveBuf(&buf[0],128);
 bool error=0;

 for(int i=0;i<bytes-44;i++){
    if ((buf[i]==1)&&(buf[i+1]==1)&&(buf[i+2]==1)&&(buf[i+3]==1)&&(buf[i+4]==1)){
        if((i+49)>=bytes){
                for(int n=0;n<49;n++){
                        recvtmpbuf.buf[n]=buf[i+n];
                }
                i=i+48;
                WriteData();
        }
        else error=1;
        if(error==1) break;
    }
 }
}
//---------------------------------------------------------------------------
void TForm1::WriteData()
{
 // ������ ������� ������ � �����
 unsigned int CodeError;
 for (int i=0;i<Lic;i++)
  {
   int   IDTag = i+1;
   float Val=0;
   float Val1=0,Val2=0;
   int   Status1=1, Status2=1;
   bool  sh=false;
   int Status=1;
   TTime      sm      ;
   TDateTime  td=Now();
   TDateTime  fd,ld   ;
   int        tz = StrToInt(td.FormatString("hh"));
   td.Val = (int)td.Val;
   fd = td; ld = td;
   if (QListTags->Locate("IDTag",IDTag,TLocateOptions()))
    {
     switch (IDTag)
      {
       case 1 : // ����� ������
                Val = recvtmpbuf.recvtmpstruct.data[0];  Status=0; break;
       case 2 : // ������� ������������������ �������
                Val = recvtmpbuf.recvtmpstruct.data[1]; Status=0; break;
       case 3 : // ����������� ������������������ �������
                Val = recvtmpbuf.recvtmpstruct.data[2]; Status=0; break;
       case 4 : // ������� ���������� �������
                Val = recvtmpbuf.recvtmpstruct.data[3]; Status=0; break;
       case 5 : // ������� ������������������ �����
                Val = recvtmpbuf.recvtmpstruct.data[4]; Status=0; break;
       case 6 : // ����������� ������������������ �����
                Val = recvtmpbuf.recvtmpstruct.data[5]; Status=0; break;
       case 7 : // ������� �������� ��������������
                Val = recvtmpbuf.recvtmpstruct.data[6]; Status=0; break;
       case 8 : // ������ �������� �������
                Val = recvtmpbuf.recvtmpstruct.data[7]; Status=0; break;
       case 9 : // ������ �������� �����
                Val = recvtmpbuf.recvtmpstruct.data[8]; Status=0; break;
       case 10: // ������� ������������������
                Val = recvtmpbuf.recvtmpstruct.data[9]; Status=0; break;
       case 11: // ������������� ������������������
                Val = recvtmpbuf.recvtmpstruct.data[10]; Status=0; break;
      }
     if ((QListTagsValueTag->AsFloat!=Val)||(QListTagsStatusTag->AsInteger!=Status)||
         ((sh)&&(Status1==0)&&(Status2==0)&&((QListTagsMinValIn->AsFloat!=Val1)||(QListTagsMinValIn->AsFloat!=Val2)))
        )
      {
       QListTags->Edit();
       QListTagsValueTag->AsFloat    = Val;
       QListTagsStatusTag->AsInteger = Status;
       if ((sh)&&(Status1==0)&&(Status2==0))
        {
         QListTagsMinVal->AsFloat = Val1;
         QListTagsMaxVal->AsFloat = Val2;
        }
       QListTags->Post();
       analiz(QListTagsIDTag->AsInteger,Val,Status,QListTagsTypeArhiv->AsInteger,QListTagsUslWrite->AsInteger,QListTagsUslAvar->AsInteger);

      }
     Arhiv->SetData(QListTagsIDTag->AsInteger,Val,Status);
    }
  }
}
//--------------------------------------------------------
void TForm1::analiz(int IDTag,double Value,int Status,int TypeArhiv,int Usl, int UslAvar)
{
 // ������ ������������� ������ � �����
 // IDTag     - ID ����
 // Value     - ��������
 // Status    - ������
 // TypeArhiv - ��� ������
 // Usl       - ������� ������ � ����� 0 - �� ���������, 1 �� ���������� ��������
 bool wr=false;
 bool av=false;
 double FaktVal;
 TDateTime tmp = Now();
 switch (TypeArhiv)
  {
   case 1 : // ����� �������
            switch (Usl)
             {
              case 0: // ������ �� ���������
                      switch (UslAvar)
                       {
                        case  2: // �������� 0 - �������� ���������
                                 av = Value==0;
                                 break;
                        case  3: // �������� 0 - �������� ��������� ��� ���������� ����� (Status) �������� ���������
                                 av = (Value==0); /* || (Status==0); */ wr=true;
                                 break;
                        case  4: // �������� 1 - �������� ���������
                                 av = Value==1;
                                 break;
                        case  5: // �������� �� �������� ���������
                        case  7:
                        case 10:
                                 av=false;
                                 break;
                        case  6: // �������� ���������, ���� == 1 ��� 2
                                 av = (Value==1) || (Value==2); wr=true;
                                 break;
                        case  8: // �������� ���������, ���� != 0
                                 av = (Value!=0);
                                 break;
                        case  9: av = (Value==1) || (Value==2) || (Value==5) || (Value==10) || (Value==14) || (Value==15) || (Value>=16);
                                 break;
                       }
                      if (!Status) wr=true;
                      FaktVal = Value;
                      break;
              case 3: // �������� ��������
                      if (!Status) Value=2;
                      switch (UslAvar)
                       {
                        case  2: // �������� 0 - �������� ���������
                                 av = Value==0;
                                 break;
                        case  3: // �������� 0 - �������� ��������� ��� ���������� ����� (Status) �������� ���������
                                 av = (Value==0) || (Status==0); wr=true;
                                 break;
                        case  4: // �������� 1 - �������� ���������
                                 av = Value==1;
                                 break;
                        case  5: // �������� �� �������� ���������
                        case  7:
                        case 10:
                                 av=false;
                                 break;
                        case  6: // �������� ���������, ���� == 1 ��� 2
                                 av = (Value==1) || (Value==2); wr=true;
                                 break;
                        case  8: // �������� ���������, ���� != 0
                                 av = (Value!=0);
                                 break;
                        case  9: av = (Value==1) ||(Value==2) || (Value==10) || (Value==5) || (Value==14) || (Value==15) || (Value>=16);
                                 break;
                       }
                      if (!Status) wr=true;
                      FaktVal = Value;
                      break;
             }
            if (wr)
             {
              // ����� ������ ���������� � ����������� ��������
              TLocateOptions SearchOptions;
              Variant locval[] = { IDTag, true };
              bool stop=false;
              if (QArhivSob->Locate("IDTag;Active",VarArrayOf(locval,1),SearchOptions<<loPartialKey<<loCaseInsensitive))
               {
                if (QArhivSobVal->AsInteger!=FaktVal)
                 {
                  QArhivSob->Edit();
                  QArhivSobActive->AsBoolean   = false;
                  QArhivSobKvitirov->AsBoolean = false;
                  QArhivSobActive1->AsBoolean  = false;
                  try
                   {
                    QArhivSobDlit->AsDateTime = Now() - QArhivSobDTSob->AsDateTime;
                   }
                  catch (...) { QArhivSobDlit->AsString=""; }
                  QArhivSob->Post()                   ;
                 }
                else stop=true;
               }
              else
               {
                if (QArhivSob->Locate("IDTag;Active1",VarArrayOf(locval,1),SearchOptions<<loPartialKey<<loCaseInsensitive))
                 {
                  if (QArhivSobVal->AsInteger!=FaktVal)
                   {
                    QArhivSob->Edit();
                    QArhivSobActive->AsBoolean   = false;
                    QArhivSobKvitirov->AsBoolean = false;
                    QArhivSobActive1->AsBoolean  = false;
                    try
                     {
                      QArhivSobDlit->AsDateTime = Now() - QArhivSobDTSob->AsDateTime;
                     }
                    catch (...) { QArhivSobDlit->AsString=""; }
                    QArhivSob->Post()                   ;
                   }
                  else stop=true;
                 }
               }
              if (!stop)
               {
                if (QArhivSob->Locate("IDSob",TekIDSob,TLocateOptions())) QArhivSob->Edit();
                else                                                      QArhivSob->Insert();
                QArhivSobIDSob->AsInteger    = TekIDSob;
                QArhivSobDTSob->AsDateTime   = tmp     ;
                QArhivSobIDTag->AsInteger    = IDTag   ;
                QArhivSobVal->AsInteger      = FaktVal ;
                QArhivSobActive->AsBoolean   = av      ;
                QArhivSobKvitirov->AsBoolean = av      ;
                QArhivSobActive1->AsBoolean  = true    ;
                QArhivSobDlit->AsString      = ""      ;
                if (av) // ������ �������� ���������, ������� ���������
                    {
                        //PostMessage(FindWindow("TFMainForm","��� \"����-����-����\". ��������� ��������������� �����."),WM_USER+4,1,1);
                    }
                QArhivSob->Post();
                TekIDSob++;
               }
             }
            break;
  }

}
//----------------------------------------------

__fastcall TForm1::~TForm1(void)
{
    ConArhiv->Close();
}