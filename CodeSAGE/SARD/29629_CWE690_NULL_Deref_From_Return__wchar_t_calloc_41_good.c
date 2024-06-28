#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)calloc(20, sizeof(wchar_t));
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
