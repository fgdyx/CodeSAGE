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
 memset(VAR2, '', 149);
 VAR2[149] = '';
 memcpy(VAR3, VAR2, 99*sizeof(char));
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
 memset(VAR2, '', 149);
 VAR2[149] = '';
 memcpy(VAR3, VAR2, 99*sizeof(char));
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
