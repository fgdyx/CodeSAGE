#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 }
 FUN4(VAR2);
 free(VAR2);
}
void FUN5()
{
 FUN1();
}
#endif
