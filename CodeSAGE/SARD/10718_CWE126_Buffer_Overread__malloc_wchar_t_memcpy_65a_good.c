#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR5'', 100-1);
 VAR2[100-1] = VAR5'';
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
