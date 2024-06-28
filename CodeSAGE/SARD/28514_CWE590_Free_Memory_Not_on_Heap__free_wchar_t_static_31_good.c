#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 {
 wchar_t * VAR5 = VAR2;
 wchar_t * VAR2 = VAR5;
 FUN4(VAR2);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
}
#endif
