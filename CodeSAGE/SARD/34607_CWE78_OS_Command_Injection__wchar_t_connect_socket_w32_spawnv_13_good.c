#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR4"");
 }
 {
 wchar_t *VAR6[] = {VAR7, VAR8, VAR9, VAR10, NULL};
 FUN3(VAR11, VAR7, VAR6);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 wcscat(VAR2, VAR4"");
 }
 {
 wchar_t *VAR6[] = {VAR7, VAR8, VAR9, VAR10, NULL};
 FUN3(VAR11, VAR7, VAR6);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
