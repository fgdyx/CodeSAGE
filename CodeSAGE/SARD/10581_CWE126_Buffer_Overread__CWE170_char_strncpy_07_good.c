#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR3[150], VAR4[100];
 memset(VAR3, '', 149);
 VAR3[149] = '';
 strncpy(VAR4, VAR3, 99);
 VAR4[99] = '';
 FUN2(VAR4);
 }
 }
}
static void FUN3()
{
 if(VAR2==5)
 {
 {
 char VAR3[150], VAR4[100];
 memset(VAR3, '', 149);
 VAR3[149] = '';
 strncpy(VAR4, VAR3, 99);
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
