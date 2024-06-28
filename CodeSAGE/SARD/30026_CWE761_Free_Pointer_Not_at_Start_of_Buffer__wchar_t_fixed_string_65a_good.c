#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR5'';
 wcscpy(VAR2, VAR6);
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
