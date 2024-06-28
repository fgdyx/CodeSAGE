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
 {
 wchar_t *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN4(VAR10, VAR11, VAR5);
 }
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
 {
 wchar_t *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN4(VAR10, VAR11, VAR5);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
