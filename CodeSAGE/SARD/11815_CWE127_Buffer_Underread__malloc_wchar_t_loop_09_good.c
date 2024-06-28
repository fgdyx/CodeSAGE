#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 }
 }
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR7[VAR6] = VAR2[VAR6];
 }
 VAR7[100-1] = VAR5'';
 FUN3(VAR7);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR8)
 {
 {
 wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 }
 }
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR7[VAR6] = VAR2[VAR6];
 }
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
