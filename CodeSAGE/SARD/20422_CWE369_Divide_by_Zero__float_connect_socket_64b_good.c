#ifndef VAR1
void FUN1(void * VAR2)
{
 float * VAR3 = (float *)VAR2;
 float VAR4 = (*VAR3);
 {
 int VAR5 = (int)(100.0 / VAR4);
 FUN2(VAR5);
 }
}
void FUN3(void * VAR2)
{
 float * VAR3 = (float *)VAR2;
 float VAR4 = (*VAR3);
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
