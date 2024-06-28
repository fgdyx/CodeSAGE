#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc(20*sizeof(wchar_t));
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
