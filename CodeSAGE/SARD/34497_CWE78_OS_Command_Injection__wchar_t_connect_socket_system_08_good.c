#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 wcscat(VAR2, VAR5"");
 }
 if (FUN4(VAR2) <= 0)
 {
 FUN3("");
 FUN5(1);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(FUN7())
 {
 wcscat(VAR2, VAR5"");
 }
 if (FUN4(VAR2) <= 0)
 {
 FUN3("");
 FUN5(1);
 }
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
