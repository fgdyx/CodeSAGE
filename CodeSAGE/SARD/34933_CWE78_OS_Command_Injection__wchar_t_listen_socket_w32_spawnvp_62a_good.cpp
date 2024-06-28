#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 wchar_t *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN3(VAR10, VAR11, VAR5);
 }
}
void FUN4()
{
 FUN2();
}
#endif
