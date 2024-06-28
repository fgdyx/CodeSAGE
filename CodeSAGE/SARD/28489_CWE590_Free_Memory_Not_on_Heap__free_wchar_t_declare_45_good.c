#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 FUN2(VAR2);
 free(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR4 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN6()
{
 FUN3();
}
#endif
