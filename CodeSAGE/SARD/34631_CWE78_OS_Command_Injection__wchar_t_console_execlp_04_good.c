#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR4"");
 }
 FUN3(VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR10)
 {
 wcscat(VAR2, VAR4"");
 }
 FUN3(VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
