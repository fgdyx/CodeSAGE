#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(float VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if(FUN3(VAR5) > 0.000001)
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN5(float VAR5)
{
 if(VAR3)
 {
 if(FUN3(VAR5) > 0.000001)
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN6(float VAR5)
{
 if(VAR4)
 {
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 }
}
#endif
