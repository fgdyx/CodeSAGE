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
 if(VAR6!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 size_t VAR7, VAR8;
 wchar_t VAR9[100];
 wmemset(VAR9, VAR5'', 100-1);
 VAR9[100-1] = VAR5'';
 VAR8 = wcslen(VAR9);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR9[VAR7] = VAR2[VAR7];
 }
 VAR9[100-1] = VAR5'';
 FUN3(VAR9);
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
 if(VAR6==5)
 {
 VAR2 = VAR4;
 }
 {
 size_t VAR7, VAR8;
 wchar_t VAR9[100];
 wmemset(VAR9, VAR5'', 100-1);
 VAR9[100-1] = VAR5'';
 VAR8 = wcslen(VAR9);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR9[VAR7] = VAR2[VAR7];
 }
 VAR9[100-1] = VAR5'';
 FUN3(VAR9);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
