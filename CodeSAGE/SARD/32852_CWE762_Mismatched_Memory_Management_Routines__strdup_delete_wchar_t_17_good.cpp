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
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 free(VAR4);
 }
}
static void FUN3()
{
 int VAR7,VAR8;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 VAR4 = new wchar_t;
 }
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 delete VAR4;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
