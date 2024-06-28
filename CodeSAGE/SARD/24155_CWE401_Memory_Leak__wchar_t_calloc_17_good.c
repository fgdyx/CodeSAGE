#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR4, VAR5"");
 FUN2(VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 free(VAR4);
 }
}
static void FUN3()
{
 int VAR6,VAR7;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 VAR4 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 wcscpy(VAR4, VAR5"");
 FUN2(VAR4);
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 ;
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
