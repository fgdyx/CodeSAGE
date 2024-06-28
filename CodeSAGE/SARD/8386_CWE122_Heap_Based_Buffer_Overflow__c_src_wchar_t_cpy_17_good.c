#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 wcscpy(VAR5, VAR3);
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
