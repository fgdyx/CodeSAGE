#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 if(0)
 {
 FUN2("");
 }
 else
 {
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 }
 {
 wchar_t VAR4[50] = VAR3"";
 FUN3(VAR4, wcslen(VAR2), VAR3"", VAR2);
 FUN4(VAR2);
 delete [] VAR2;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 if(1)
 {
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 }
 {
 wchar_t VAR4[50] = VAR3"";
 FUN3(VAR4, wcslen(VAR2), VAR3"", VAR2);
 FUN4(VAR2);
 delete [] VAR2;
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
