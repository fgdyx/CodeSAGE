#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 VAR4 = new wchar_t[100];
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t VAR5[50] = VAR6"";
 FUN3(VAR5, wcslen(VAR4), VAR6"", VAR4);
 FUN4(VAR4);
 delete [] VAR4;
 }
 ;
}
wchar_t * FUN5(wchar_t * VAR4);
static void FUN6()
{
 wchar_t * VAR4;
 VAR4 = new wchar_t[100];
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 wchar_t VAR5[50] = VAR6"";
 FUN3(VAR5, wcslen(VAR4), VAR6"", VAR4);
 FUN4(VAR4);
 delete [] VAR4;
 }
 ;
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
