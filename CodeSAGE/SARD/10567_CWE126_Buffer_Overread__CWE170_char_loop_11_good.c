#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 char VAR2[150], VAR3[100];
 int VAR4;
 memset(VAR2, '', 149);
 VAR2[149] = '';
 for(VAR4=0; VAR4 < 99; VAR4++)
 {
 VAR3[VAR4] = VAR2[VAR4];
 }
 VAR3[99] = '';
 FUN3(VAR3);
 }
 }
}
static void FUN4()
{
 if(FUN5())
 {
 {
 char VAR2[150], VAR3[100];
 int VAR4;
 memset(VAR2, '', 149);
 VAR2[149] = '';
 for(VAR4=0; VAR4 < 99; VAR4++)
 {
 VAR3[VAR4] = VAR2[VAR4];
 }
 VAR3[99] = '';
 FUN3(VAR3);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
