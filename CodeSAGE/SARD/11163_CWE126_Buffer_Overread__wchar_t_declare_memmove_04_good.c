#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 memmove(VAR7, VAR2, wcslen(VAR7)*sizeof(wchar_t));
 VAR7[100-1] = VAR5'';
 FUN3(VAR7);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 if(VAR8)
 {
 VAR2 = VAR4;
 }
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 memmove(VAR7, VAR2, wcslen(VAR7)*sizeof(wchar_t));
 VAR7[100-1] = VAR5'';
 FUN3(VAR7);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
