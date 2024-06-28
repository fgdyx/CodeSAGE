#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = new wchar_t;
 *VAR4 = VAR5'';
 FUN2((char)*VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 delete VAR4;
 }
}
static void FUN3()
{
 int VAR6,VAR7;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 wchar_t VAR8;
 VAR4 = &VAR8;
 *VAR4 = VAR5'';
 FUN2((char)*VAR4);
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 ;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
