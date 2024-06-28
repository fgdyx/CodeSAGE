#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 wcscat(VAR2, VAR7"");
 VAR3.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR9;
 {
 int VAR10;
 VAR10 = FUN2(VAR2, VAR11|VAR12, VAR13|VAR14);
 if (VAR10 != -1)
 {
 FUN3(VAR10);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
