#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 goto VAR6;
VAR6:
#ifdef VAR7
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 {
 HANDLE VAR8;
 VAR8 = FUN2(VAR2,
 (VAR9|VAR10),
 0,
 NULL,
 VAR11,
 VAR12,
 NULL);
 if (VAR8 != VAR13)
 {
 FUN3(VAR8);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
