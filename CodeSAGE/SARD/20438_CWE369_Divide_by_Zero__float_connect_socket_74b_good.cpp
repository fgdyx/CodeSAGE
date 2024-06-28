#ifndef VAR1
void FUN1(VAR2<int, float> VAR3)
{
 float VAR4 = VAR3[2];
 {
 int VAR5 = (int)(100.0 / VAR4);
 FUN2(VAR5);
 }
}
void FUN3(VAR2<int, float> VAR3)
{
 float VAR4 = VAR3[2];
 if(FUN4(VAR4) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR4);
 FUN2(VAR5);
 }
 else
 {
 FUN5("");
 }
}
#endif
