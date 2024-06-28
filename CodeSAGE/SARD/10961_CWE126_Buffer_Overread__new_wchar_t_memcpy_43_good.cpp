#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 memcpy(VAR4, VAR2, wcslen(VAR4)*sizeof(wchar_t));
 VAR4[100-1] = VAR3'';
 FUN3(VAR4);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
