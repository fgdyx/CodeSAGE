#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
