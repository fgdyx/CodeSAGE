#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
#ifdef VAR7
 wcscat(VAR3, VAR6"");
#else
 wcscat(VAR3, VAR6"");
#endif
 }
 {
 HANDLE VAR8;
 VAR8 = FUN2(VAR3,
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
