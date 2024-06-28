#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 memmove(VAR4, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR4[50-1] = VAR5'';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
