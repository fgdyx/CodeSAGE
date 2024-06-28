#ifndef VAR1
static void FUN1()
{
 float VAR2;
 float *VAR3 = &VAR2;
 float *VAR4 = &VAR2;
 VAR2 = 0.0F;
 {
 float VAR2 = *VAR3;
 VAR2 = 2.0F;
 *VAR3 = VAR2;
 }
 {
 float VAR2 = *VAR4;
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN2(VAR5);
 }
 }
}
static void FUN3()
{
 float VAR2;
 float *VAR3 = &VAR2;
 float *VAR4 = &VAR2;
 VAR2 = 0.0F;
 {
 float VAR2 = *VAR3;
 fscanf (stdin, "", &VAR2);
 *VAR3 = VAR2;
 }
 {
 float VAR2 = *VAR4;
 if(FUN4(VAR2) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN2(VAR5);
 }
 else
 {
 FUN5("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
