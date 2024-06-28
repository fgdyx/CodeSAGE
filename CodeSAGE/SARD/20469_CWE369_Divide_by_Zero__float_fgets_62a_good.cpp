#ifndef VAR1
void FUN1(float &VAR2);
static void FUN2()
{
 float VAR2;
 VAR2 = 0.0F;
 FUN1(VAR2);
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN3(VAR3);
 }
}
void FUN4(float &VAR2);
static void FUN5()
{
 float VAR2;
 VAR2 = 0.0F;
 FUN4(VAR2);
 if(FUN6(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN3(VAR3);
 }
 else
 {
 FUN7("");
 }
}
void FUN8()
{
 FUN2();
 FUN5();
}
#endif
