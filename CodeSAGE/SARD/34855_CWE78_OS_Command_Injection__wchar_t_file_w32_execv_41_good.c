#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t *VAR3[] = {VAR4, VAR5, VAR6, VAR7, NULL};
 FUN2(VAR4, VAR3);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR9"";
 VAR2 = VAR8;
 wcscat(VAR2, VAR9"");
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
