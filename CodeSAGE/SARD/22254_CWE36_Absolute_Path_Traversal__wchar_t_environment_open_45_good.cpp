#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 int VAR4;
 VAR4 = FUN2(VAR2, VAR5|VAR6, VAR7|VAR8);
 if (VAR4 != -1)
 {
 FUN3(VAR4);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR9[VAR10] = VAR11"";
 VAR2 = VAR9;
#ifdef VAR12
 wcscat(VAR2, VAR11"");
#else
 wcscat(VAR2, VAR11"");
#endif
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN4();
}
#endif
