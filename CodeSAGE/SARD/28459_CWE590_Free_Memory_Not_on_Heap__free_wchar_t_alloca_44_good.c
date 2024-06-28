#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 FUN2(VAR2);
 free(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 {
 wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR5 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 VAR2 = VAR5;
 }
 FUN6(VAR2);
}
void FUN7()
{
 FUN3();
}
#endif
