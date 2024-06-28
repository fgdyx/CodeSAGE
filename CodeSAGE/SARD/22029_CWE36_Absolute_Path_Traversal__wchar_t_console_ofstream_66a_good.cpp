#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[VAR5] = VAR6"";
 VAR3 = VAR4;
#ifdef VAR7
 wcscat(VAR3, VAR6"");
#else
 wcscat(VAR3, VAR6"");
#endif
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
