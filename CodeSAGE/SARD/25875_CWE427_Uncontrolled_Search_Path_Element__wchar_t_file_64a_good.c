#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[250] = VAR5"";
 VAR3 = VAR4;
 wcscat(VAR3, VAR6);
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
