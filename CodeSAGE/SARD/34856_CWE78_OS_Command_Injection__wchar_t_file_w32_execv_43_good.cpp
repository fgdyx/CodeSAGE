#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wcscat(VAR2, VAR3"");
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR3"";
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 wchar_t *VAR5[] = {VAR6, VAR7, VAR8, VAR9, NULL};
 FUN3(VAR6, VAR5);
 }
}
void FUN4()
{
 FUN2();
}
#endif
