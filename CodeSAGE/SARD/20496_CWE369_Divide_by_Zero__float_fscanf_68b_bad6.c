#ifndef VAR1
void FUN1()
{
 float VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR4 = (int)(100.0 / VAR2);
 FUN2(VAR4);
 }
}
#endif
