#ifndef VAR1
static void FUN1(wchar_t * VAR2)
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
 void (*VAR8) (wchar_t *) = VAR9;
 wchar_t VAR10[VAR11] = VAR12;
 VAR2 = VAR10;
 wcscat(VAR2, VAR13"");
 FUN5(VAR2);
}
void FUN6()
{
 FUN4();
}
#endif
