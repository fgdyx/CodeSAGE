#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR6);
 }
 FUN3(VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 if(VAR7)
 {
 wcscat(VAR2, VAR6);
 }
 FUN3(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
