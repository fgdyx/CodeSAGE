#ifndef VAR1
void FUN1();
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 VAR4 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
