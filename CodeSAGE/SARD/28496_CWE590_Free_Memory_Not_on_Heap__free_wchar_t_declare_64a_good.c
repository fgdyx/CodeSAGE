#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 {
 wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR4 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR3 = VAR4;
 }
 FUN1(&VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
