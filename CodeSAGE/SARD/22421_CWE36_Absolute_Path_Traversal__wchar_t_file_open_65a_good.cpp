#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR2 = VAR5;
#ifdef VAR8
 wcscat(VAR2, VAR7"");
#else
 wcscat(VAR2, VAR7"");
#endif
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
