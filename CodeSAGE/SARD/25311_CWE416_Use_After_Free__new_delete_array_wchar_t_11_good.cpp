#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 delete [] VAR2;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 ;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 delete [] VAR2;
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 if(FUN2())
 {
 FUN7(VAR2);
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 if(FUN2())
 {
 FUN7(VAR2);
 }
}
void FUN9()
{
 FUN1();
 FUN5();
 FUN6();
 FUN8();
}
#endif
