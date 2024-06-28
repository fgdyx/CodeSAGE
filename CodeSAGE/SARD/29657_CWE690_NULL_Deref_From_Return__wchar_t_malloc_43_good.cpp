#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 VAR2 = (wchar_t *)malloc(20*sizeof(wchar_t));
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
