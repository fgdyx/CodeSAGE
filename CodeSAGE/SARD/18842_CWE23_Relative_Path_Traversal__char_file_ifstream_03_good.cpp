#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 ifstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(5==5)
 {
 strcat(VAR2, "");
 }
 {
 ifstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
