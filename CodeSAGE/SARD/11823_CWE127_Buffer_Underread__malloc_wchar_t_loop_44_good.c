#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3;
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR4[VAR3] = VAR2[VAR3];
 }
 VAR4[100-1] = VAR5'';
 FUN2(VAR4);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR6) (wchar_t *) = VAR7;
 VAR2 = NULL;
 {
 wchar_t * VAR8 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR8, VAR5'', 100-1);
 VAR8[100-1] = VAR5'';
 VAR2 = VAR8;
 }
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
