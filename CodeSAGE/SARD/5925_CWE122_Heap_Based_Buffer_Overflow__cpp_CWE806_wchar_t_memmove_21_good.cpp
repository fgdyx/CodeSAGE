#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static wchar_t * FUN1(wchar_t * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 VAR4 = new wchar_t[100];
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t VAR6[50] = VAR5"";
 memmove(VAR6, VAR4, wcslen(VAR4)*sizeof(wchar_t));
 VAR6[50-1] = VAR5'';
 FUN4(VAR4);
 delete [] VAR4;
 }
 ;
}
static wchar_t * FUN5(wchar_t * VAR4)
{
 if(VAR3)
 {
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 }
 return VAR4;
}
static void FUN6()
{
 wchar_t * VAR4;
 VAR4 = new wchar_t[100];
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 wchar_t VAR6[50] = VAR5"";
 memmove(VAR6, VAR4, wcslen(VAR4)*sizeof(wchar_t));
 VAR6[50-1] = VAR5'';
 FUN4(VAR4);
 delete [] VAR4;
 }
 ;
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
