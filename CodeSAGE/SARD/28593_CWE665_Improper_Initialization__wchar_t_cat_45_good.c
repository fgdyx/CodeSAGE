#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 wcscat(VAR2, VAR4);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR6[100];
 VAR2 = VAR6;
 VAR2[0] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
