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
 char VAR3[150], VAR4[100];
 memset(VAR3, '', 149);
 VAR3[149] = '';
 memcpy(VAR4, VAR3, 99*sizeof(char));
 VAR4[99] = '';
 FUN2(VAR4);
 }
 }
}
static void FUN3()
{
 if(VAR5)
 {
 {
 char VAR3[150], VAR4[100];
 memset(VAR3, '', 149);
 VAR3[149] = '';
 memcpy(VAR4, VAR3, 99*sizeof(char));
 VAR4[99] = '';
 FUN2(VAR4);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
