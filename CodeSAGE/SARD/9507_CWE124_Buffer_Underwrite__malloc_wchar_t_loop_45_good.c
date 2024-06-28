#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 size_t VAR4;
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR5[VAR4];
 }
 VAR2[100-1] = VAR6'';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR7, VAR6'', 100-1);
 VAR7[100-1] = VAR6'';
 VAR2 = VAR7;
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
