#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR5[10+1] = VAR6;
 strcpy(VAR2, VAR5);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 if(5==5)
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR5[10+1] = VAR6;
 strcpy(VAR2, VAR5);
 FUN2(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
