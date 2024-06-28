#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR6"");
 }
 if (FUN3(VAR2) <= 0)
 {
 FUN2("");
 FUN4(1);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(VAR7)
 {
 wcscat(VAR2, VAR6"");
 }
 if (FUN3(VAR2) <= 0)
 {
 FUN2("");
 FUN4(1);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
