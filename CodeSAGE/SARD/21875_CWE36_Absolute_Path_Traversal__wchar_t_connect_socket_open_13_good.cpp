#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(VAR6!=5)
 {
 FUN2("");
 }
 else
 {
#ifdef VAR7
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 int VAR8;
 VAR8 = FUN3(VAR2, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
 {
 FUN4(VAR8);
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(VAR6==5)
 {
#ifdef VAR7
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 }
 {
 int VAR8;
 VAR8 = FUN3(VAR2, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
 {
 FUN4(VAR8);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
