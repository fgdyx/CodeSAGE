#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 goto VAR5;
VAR5:
 wcscat(VAR2, VAR4"");
 {
 wchar_t *VAR6[] = {VAR7, VAR8, VAR9, VAR10, NULL};
 FUN2(VAR11, VAR6);
 }
}
void FUN3()
{
 FUN1();
}
#endif
