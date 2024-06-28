#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 int VAR7;
 VAR7 = FUN4(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN5(VAR7);
 }
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(FUN7())
 {
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 int VAR7;
 VAR7 = FUN4(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
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
