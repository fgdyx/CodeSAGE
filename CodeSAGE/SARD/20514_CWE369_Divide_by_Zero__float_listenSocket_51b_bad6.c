#ifndef VAR1
void FUN1(float VAR2)
{
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
}
#endif
