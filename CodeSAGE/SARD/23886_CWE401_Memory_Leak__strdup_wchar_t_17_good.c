#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 wchar_t VAR5[] = VAR6"";
 VAR4 = FUN2(VAR5);
 FUN3(VAR4);
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 free(VAR4);
 }
}
static void FUN4()
{
 int VAR7,VAR8;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 VAR4 = (wchar_t *)FUN5(100*sizeof(wchar_t));
 wcscpy(VAR4, VAR6"");
 FUN3(VAR4);
 }
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 ;
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
