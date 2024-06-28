#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 memcpy(VAR4, VAR2, wcslen(VAR4)*sizeof(wchar_t));
 VAR4[100-1] = VAR3'';
 FUN2(VAR4);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
