#ifndef VAR1
void FUN1(float VAR2)
{
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
}
void FUN3(float VAR2)
{
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
#endif
