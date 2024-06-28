#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN4(VAR2[0]);
 }
}
static void FUN5()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 if(FUN6())
 {
 VAR2 = VAR4;
 }
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN4(VAR2[0]);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
