#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 wcscat(VAR2, VAR5);
 }
 FUN4(VAR2);
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 if(FUN6())
 {
 wcscat(VAR2, VAR5);
 }
 FUN4(VAR2);
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
