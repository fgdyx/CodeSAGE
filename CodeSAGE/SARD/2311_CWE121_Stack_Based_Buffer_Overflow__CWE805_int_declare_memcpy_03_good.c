#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
}
static void FUN4()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 if(5==5)
 {
 VAR2 = VAR4;
 }
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
