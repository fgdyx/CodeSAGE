#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = (wchar_t *)realloc(VAR3, 20*sizeof(wchar_t));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 if (VAR3 != NULL)
 {
 wcscpy(VAR3, VAR4"");
 FUN2(VAR3);
 free(VAR3);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
