#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 wcscat(VAR2, VAR6"");
 {
 int VAR7;
 VAR7 = FUN2(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN3(VAR7);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
