#ifndef VAR1
void FUN1()
{
 float VAR2 = VAR3;
 {
 int VAR4 = (int)(100.0 / VAR2);
 FUN2(VAR4);
 }
}
void FUN3()
{
 float VAR2 = VAR5;
 if(FUN4(VAR2) > 0.000001)
 {
 int VAR4 = (int)(100.0 / VAR2);
 FUN2(VAR4);
 }
 else
 {
 FUN5("");
 }
}
#endif
