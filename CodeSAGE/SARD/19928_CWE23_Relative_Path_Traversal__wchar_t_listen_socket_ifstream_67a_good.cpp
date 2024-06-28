#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 wchar_t VAR4[VAR5] = VAR6;
 VAR3 = VAR4;
 wcscat(VAR3, VAR7"");
 VAR2.VAR8 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
