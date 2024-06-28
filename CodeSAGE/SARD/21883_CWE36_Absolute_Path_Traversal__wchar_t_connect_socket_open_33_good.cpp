#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR2 = VAR4;
#ifdef VAR7
 wcscat(VAR2, VAR6"");
#else
 wcscat(VAR2, VAR6"");
#endif
 {
 wchar_t * VAR2 = VAR3;
 {
 int VAR8;
 VAR8 = FUN2(VAR2, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
 {
 FUN3(VAR8);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
