#ifndef VAR1
void FUN1(float VAR2[])
{
 float VAR3 = VAR2[2];
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR4 = (int)(100.0 / VAR3);
 FUN2(VAR4);
 }
}
#endif
