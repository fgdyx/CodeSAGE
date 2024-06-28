#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[10+1] = VAR5;
 memcpy(VAR2, VAR4, (wcslen(VAR4) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR6[10];
 wchar_t VAR7[10+1];
 VAR2 = VAR7;
 VAR2[0] = VAR8'';
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
