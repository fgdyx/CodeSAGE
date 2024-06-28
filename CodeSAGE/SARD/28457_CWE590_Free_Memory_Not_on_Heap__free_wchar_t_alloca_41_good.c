#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 FUN2(VAR2);
 free(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR3 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 FUN1(VAR2);
}
void FUN6()
{
 FUN3();
}
#endif
