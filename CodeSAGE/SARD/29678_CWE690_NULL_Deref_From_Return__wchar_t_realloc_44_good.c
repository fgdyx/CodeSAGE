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
 void (*VAR4) (wchar_t *) = VAR5;
 VAR2 = NULL;
 VAR2 = (wchar_t *)realloc(VAR2, 20*sizeof(wchar_t));
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
