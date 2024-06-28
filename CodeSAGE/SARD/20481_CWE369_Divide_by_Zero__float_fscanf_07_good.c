#ifndef VAR1
static void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 if(VAR3==5)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 if(FUN3(VAR2) > 0.000001)
 {
 int VAR4 = (int)(100.0 / VAR2);
 FUN4(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 float VAR2;
 VAR2 = 0.0F;
 if(VAR3==5)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 if(FUN3(VAR2) > 0.000001)
 {
 int VAR4 = (int)(100.0 / VAR2);
 FUN4(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN6()
{
 float VAR2;
 VAR2 = 0.0F;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 2.0F;
 }
 if(VAR3==5)
 {
 {
 int VAR4 = (int)(100.0 / VAR2);
 FUN4(VAR4);
 }
 }
}
static void FUN7()
{
 float VAR2;
 VAR2 = 0.0F;
 if(VAR3==5)
 {
 VAR2 = 2.0F;
 }
 if(VAR3==5)
 {
 {
 int VAR4 = (int)(100.0 / VAR2);
 FUN4(VAR4);
 }
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
