#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
