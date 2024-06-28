#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 }
 {
 size_t VAR5, VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR4'', 100-1);
 VAR7[100-1] = VAR4'';
 VAR6 = wcslen(VAR7);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR7[VAR5] = VAR2[VAR5];
 }
 VAR7[100-1] = VAR4'';
 FUN3(VAR7);
 free(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 }
 {
 size_t VAR5, VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR4'', 100-1);
 VAR7[100-1] = VAR4'';
 VAR6 = wcslen(VAR7);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR7[VAR5] = VAR2[VAR5];
 }
 VAR7[100-1] = VAR4'';
 FUN3(VAR7);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
