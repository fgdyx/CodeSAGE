#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
