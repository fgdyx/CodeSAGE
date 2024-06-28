#ifndef VAR1
void FUN1(VAR2<float> VAR3)
{
 float VAR4 = VAR3[2];
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR5 = (int)(100.0 / VAR4);
 FUN2(VAR5);
 }
}
#endif
