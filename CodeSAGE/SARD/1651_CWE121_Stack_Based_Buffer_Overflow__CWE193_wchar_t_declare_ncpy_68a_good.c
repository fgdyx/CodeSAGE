#ifndef VAR1
void FUN1();
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 VAR6 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
