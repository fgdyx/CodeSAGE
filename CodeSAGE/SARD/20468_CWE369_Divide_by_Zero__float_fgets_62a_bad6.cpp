#ifndef VAR1
void FUN1(float &VAR2);
void FUN2()
{
 float VAR2;
 VAR2 = 0.0F;
 FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR3 = (int)(100.0 / VAR2);
 FUN3(VAR3);
 }
}
#endif
