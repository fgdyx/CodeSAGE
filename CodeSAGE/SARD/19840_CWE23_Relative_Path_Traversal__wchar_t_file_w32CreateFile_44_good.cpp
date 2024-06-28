#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 HANDLE VAR3;
 VAR3 = FUN2(VAR2,
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 if (VAR3 != VAR8)
 {
 FUN3(VAR3);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 void (*VAR9) (wchar_t *) = VAR10;
 wchar_t VAR11[VAR12] = VAR13;
 VAR2 = VAR11;
 wcscat(VAR2, VAR14"");
 FUN5(VAR2);
}
void FUN6()
{
 FUN4();
}
#endif
