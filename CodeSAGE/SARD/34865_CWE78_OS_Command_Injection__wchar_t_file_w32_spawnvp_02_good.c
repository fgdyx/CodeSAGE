#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(0)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR4"");
 }
 {
 wchar_t *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN3(VAR10, VAR11, VAR5);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(1)
 {
 wcscat(VAR2, VAR4"");
 }
 {
 wchar_t *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN3(VAR10, VAR11, VAR5);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
