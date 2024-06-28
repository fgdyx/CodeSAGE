#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 wcscat(VAR2, VAR4"");
 }
 FUN4(VAR5, VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN6())
 {
 wcscat(VAR2, VAR4"");
 }
 FUN4(VAR5, VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
