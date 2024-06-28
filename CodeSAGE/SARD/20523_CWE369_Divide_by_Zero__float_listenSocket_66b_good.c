#ifndef VAR1
void FUN1(float VAR2[])
{
 float VAR3 = VAR2[2];
 {
 int VAR4 = (int)(100.0 / VAR3);
 FUN2(VAR4);
 }
}
void FUN3(float VAR2[])
{
 float VAR3 = VAR2[2];
 if(FUN4(VAR3) > 0.000001)
 {
 int VAR4 = (int)(100.0 / VAR3);
 FUN2(VAR4);
 }
 else
 {
 FUN5("");
 }
}
#endif
