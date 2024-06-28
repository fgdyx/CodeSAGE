#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 ofstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR8)
 {
 strcat(VAR2, "");
 }
 {
 ofstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
