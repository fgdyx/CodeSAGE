#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 const VAR7& VAR8 = FUN2();
 VAR8.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
