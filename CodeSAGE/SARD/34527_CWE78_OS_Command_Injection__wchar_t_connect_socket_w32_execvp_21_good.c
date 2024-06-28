#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static wchar_t * FUN1(wchar_t * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR4, VAR5"");
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 wchar_t VAR6[100] = VAR5"";
 VAR4 = VAR6;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t *VAR7[] = {VAR8, VAR9, VAR10, VAR11, NULL};
 FUN4(VAR12, VAR7);
 }
}
static wchar_t * FUN5(wchar_t * VAR4)
{
 if(VAR3)
 {
 wcscat(VAR4, VAR5"");
 }
 return VAR4;
}
static void FUN6()
{
 wchar_t * VAR4;
 wchar_t VAR6[100] = VAR5"";
 VAR4 = VAR6;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 wchar_t *VAR7[] = {VAR8, VAR9, VAR10, VAR11, NULL};
 FUN4(VAR12, VAR7);
 }
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
