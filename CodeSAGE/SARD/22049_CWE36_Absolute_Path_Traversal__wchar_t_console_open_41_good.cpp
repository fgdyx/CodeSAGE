#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 int VAR3;
 VAR3 = FUN2(VAR2, VAR4|VAR5, VAR6|VAR7);
 if (VAR3 != -1)
 {
 FUN3(VAR3);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR8[VAR9] = VAR10"";
 VAR2 = VAR8;
#ifdef VAR11
 wcscat(VAR2, VAR10"");
#else
 wcscat(VAR2, VAR10"");
#endif
 FUN1(VAR2);
}
void FUN5()
{
 FUN4();
}
#endif
