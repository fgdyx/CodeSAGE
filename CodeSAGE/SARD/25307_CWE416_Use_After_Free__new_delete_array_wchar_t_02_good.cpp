#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 delete [] VAR2;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 delete [] VAR2;
 }
 if(1)
 {
 ;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 if(1)
 {
 FUN5(VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 if(1)
 {
 FUN5(VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
