#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = (wchar_t *)malloc(20*sizeof(wchar_t));
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR5"");
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
