#ifndef VAR1
static void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR2 = 2.0F;
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
}
static void FUN3()
{
 float VAR2;
 VAR2 = 0.0F;
 fscanf (stdin, "", &VAR2);
 if(FUN4(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
 else
 {
 FUN5("");
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
