#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 FUN2(VAR3, 100, VAR4"", VAR5);
 FUN3(VAR3);
 free(VAR3);
 }
}
void FUN4()
{
 FUN1();
}
#endif
