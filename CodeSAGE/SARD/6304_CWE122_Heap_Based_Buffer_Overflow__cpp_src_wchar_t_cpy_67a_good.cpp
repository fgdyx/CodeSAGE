#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
