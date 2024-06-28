#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
