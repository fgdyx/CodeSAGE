#ifndef VAR1
void FUN1(wchar_t * * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 wcscat(VAR2, VAR6"");
 FUN1(&VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
