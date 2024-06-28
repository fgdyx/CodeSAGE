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
 int VAR5;
 memset(VAR3, '', 149);
 VAR3[149] = '';
 for(VAR5=0; VAR5 < 99; VAR5++)
 {
 VAR4[VAR5] = VAR3[VAR5];
 }
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
 int VAR5;
 memset(VAR3, '', 149);
 VAR3[149] = '';
 for(VAR5=0; VAR5 < 99; VAR5++)
 {
 VAR4[VAR5] = VAR3[VAR5];
 }
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
