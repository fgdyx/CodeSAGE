#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[100];
 VAR3 = VAR4;
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
