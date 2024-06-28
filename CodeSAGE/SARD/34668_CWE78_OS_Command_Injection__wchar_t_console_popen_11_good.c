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
 {
 VAR6 *VAR7;
 VAR7 = FUN4(VAR2, VAR5"");
 if (VAR7 != NULL)
 {
 FUN5(VAR7);
 }
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
 {
 VAR6 *VAR7;
 VAR7 = FUN4(VAR2, VAR5"");
 if (VAR7 != NULL)
 {
 FUN5(VAR7);
 }
 }
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
