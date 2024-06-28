#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 wcscat(VAR2, VAR7"");
 }
 {
 HANDLE VAR8;
 VAR8 = FUN3(VAR2,
 (VAR9|VAR10),
 0,
 NULL,
 VAR11,
 VAR12,
 NULL);
 if (VAR8 != VAR13)
 {
 FUN4(VAR8);
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR14)
 {
 wcscat(VAR2, VAR7"");
 }
 {
 HANDLE VAR8;
 VAR8 = FUN3(VAR2,
 (VAR9|VAR10),
 0,
 NULL,
 VAR11,
 VAR12,
 NULL);
 if (VAR8 != VAR13)
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
