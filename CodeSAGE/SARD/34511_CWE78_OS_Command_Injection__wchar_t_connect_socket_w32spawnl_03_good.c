#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR4"");
 }
 _wspawnl(VAR5, VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(5==5)
 {
 wcscat(VAR2, VAR4"");
 }
 _wspawnl(VAR5, VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
