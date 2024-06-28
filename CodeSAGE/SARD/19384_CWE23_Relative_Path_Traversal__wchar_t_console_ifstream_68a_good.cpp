#ifndef VAR1
void FUN1();
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 wcscat(VAR2, VAR6"");
 VAR7 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
