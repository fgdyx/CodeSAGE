#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)realloc(VAR2, 20*sizeof(wchar_t));
 {
 wchar_t * VAR3 = VAR2;
 wchar_t * VAR2 = VAR3;
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR4"");
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
