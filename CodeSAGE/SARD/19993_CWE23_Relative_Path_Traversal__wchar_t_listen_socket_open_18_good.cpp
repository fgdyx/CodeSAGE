#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 goto VAR6;
VAR6:
 wcscat(VAR2, VAR7"");
 {
 int VAR8;
 VAR8 = FUN2(VAR2, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
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
