#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)realloc(VAR2, 20*sizeof(wchar_t));
 while(1)
 {
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 free(VAR2);
 }
 break;
 }
}
void FUN3()
{
 FUN1();
}
#endif
