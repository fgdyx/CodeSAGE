#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 {
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 memcpy(VAR5, VAR2, wcslen(VAR5)*sizeof(wchar_t));
 VAR5[100-1] = VAR4'';
 FUN2(VAR5);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
