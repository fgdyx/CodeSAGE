#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = new wchar_t[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 delete [] VAR4;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 ;
 }
}
static void FUN2()
{
 int VAR6,VAR7;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 VAR4 = new wchar_t[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 FUN3(VAR4);
 }
}
void FUN4()
{
 FUN1();
 FUN2();
}
#endif
