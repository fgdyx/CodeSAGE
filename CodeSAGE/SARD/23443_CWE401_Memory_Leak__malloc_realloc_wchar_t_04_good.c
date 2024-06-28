#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wchar_t * VAR4;
 wcscpy(VAR3, VAR5"");
 FUN3(VAR3);
 VAR4 = (wchar_t *)realloc(VAR3, (130000)*sizeof(wchar_t));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 wcscpy(VAR3, VAR5"");
 FUN3(VAR3);
 }
 free(VAR3);
 }
 }
}
static void FUN4()
{
 if(VAR6)
 {
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wchar_t * VAR4;
 wcscpy(VAR3, VAR5"");
 FUN3(VAR3);
 VAR4 = (wchar_t *)realloc(VAR3, (130000)*sizeof(wchar_t));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 wcscpy(VAR3, VAR5"");
 FUN3(VAR3);
 }
 free(VAR3);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
