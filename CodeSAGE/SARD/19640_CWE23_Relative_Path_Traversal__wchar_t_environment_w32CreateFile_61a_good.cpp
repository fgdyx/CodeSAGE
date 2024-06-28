#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 HANDLE VAR6;
 VAR6 = FUN3(VAR2,
 (VAR7|VAR8),
 0,
 NULL,
 VAR9,
 VAR10,
 NULL);
 if (VAR6 != VAR11)
 {
 FUN4(VAR6);
 }
 }
}
void FUN5()
{
 FUN2();
}
#endif
