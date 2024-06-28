#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 {
 wchar_t * VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 VAR4 = VAR5;
 }
 VAR3.FUN5(VAR4);
 VAR3.FUN5(VAR4);
 VAR3.FUN5(VAR4);
 FUN1(VAR3);
}
void FUN6()
{
 FUN2();
}
#endif
