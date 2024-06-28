#ifndef VAR1
static void FUN1()
{
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR2[150], VAR3[100];
 memset(VAR2, '', 149);
 VAR2[149] = '';
 strncpy(VAR3, VAR2, 99);
 VAR3[99] = '';
 FUN2(VAR3);
 }
 }
}
static void FUN3()
{
 if(5==5)
 {
 {
 char VAR2[150], VAR3[100];
 memset(VAR2, '', 149);
 VAR2[149] = '';
 strncpy(VAR3, VAR2, 99);
 VAR3[99] = '';
 FUN2(VAR3);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
