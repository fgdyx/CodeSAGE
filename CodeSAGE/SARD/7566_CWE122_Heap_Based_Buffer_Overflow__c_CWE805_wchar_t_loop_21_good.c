#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static wchar_t * FUN1(wchar_t * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR4[0] = VAR5'';
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 VAR4 = NULL;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR4[VAR6] = VAR7[VAR6];
 }
 VAR4[100-1] = VAR5'';
 FUN4(VAR4);
 free(VAR4);
 }
}
static wchar_t * FUN5(wchar_t * VAR4)
{
 if(VAR3)
 {
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR4[0] = VAR5'';
 }
 return VAR4;
}
static void FUN6()
{
 wchar_t * VAR4;
 VAR4 = NULL;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR4[VAR6] = VAR7[VAR6];
 }
 VAR4[100-1] = VAR5'';
 FUN4(VAR4);
 free(VAR4);
 }
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
