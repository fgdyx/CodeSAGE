#ifndef VAR1
static void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 while(1)
 {
 fscanf (stdin, "", &VAR2);
 break;
 }
 while(1)
 {
 if(FUN2(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 break;
 }
}
static void FUN5()
{
 float VAR2;
 VAR2 = 0.0F;
 while(1)
 {
 VAR2 = 2.0F;
 break;
 }
 while(1)
 {
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN3(VAR3);
 }
 break;
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
